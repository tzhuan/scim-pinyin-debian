%define nam             scim-pinyin
%define ver             0.5.91
%define skim            1
%define rel             1

Summary:        Smart Pinyin IMEngine for Smart Common Input Method platform
Name:           %{nam}
Version:        %{ver}
Release:        %{rel}
License:        GPL
Group:          System/I18n/Chinese
URL:            http://sourceforge.net:/projects/scim
BuildRoot:      %{_tmppath}/%{name}-%{version}-root

Source0:        %{name}-%{version}.tar.gz
#NoSource:	0

PreReq:         /sbin/ldconfig, /bin/sh

Requires:	scim >= 1.2.0
BuildRequires:  scim-devel >= 1.2.0

Requires:	gtk2 >= 2.0.0
BuildRequires:	gtk2-devel >= 2.0.0

%if %{skim}
BuildRequires:	skim-devel >= 1.2.0
%endif

%description
This package includes Simplified Chinese Smart Pinyin IMEngine for SCIM.

%if %{skim}
%package skim
Summary:        Skim support for Smart Pinyin IMEngine
Group:          System/I18n/Chinese
Requires:	%{name} = %{version}
Requires:	skim >= 1.2.0

%description skim
This package includes Skim support for Simplified Chinese Smart Pinyin IMEngine.
%endif

%changelog
* Thu Jan 06 2005 James Su <suzhe@tsinghua.org.cn>
- Change package name to scim-pinyin.

* Mon Apr 26 2004 James Su <suzhe@tsinghua.org.cn>
- change the license to GPL.

* Thu Jun 19 2003 James Su <suzhe@tsinghua.org.cn>
- updated to include setup module.

* Thu May 22 2003 James Su <suzhe@tsinghua.org.cn>
- upto v0.2.1

* Mon Mar 31 2003 James Su <suzhe@tsinghua.org.cn>
- upto v0.2.0

* Sun Jul 7 2002 James Su <suzhe@tsinghua.org.cn>
- first public release of SCIM-chinese.

#--------------------------------------------------

%prep

%setup -n %{name}-%{version}

%build
./configure --prefix=%{_prefix} --sysconfdir=%{_sysconfdir} --disable-static

make 

%install
[ -n "$RPM_BUILD_ROOT" -a "$RPM_BUILD_ROOT" != / ] && rm -rf $RPM_BUILD_ROOT

make DESTDIR=${RPM_BUILD_ROOT} install

rm -f $RPM_BUILD_ROOT//usr/lib/scim-1.0/IMEngine/*.{a,la}
rm -f $RPM_BUILD_ROOT//usr/lib/scim-1.0/SetupUI/*.{a,la}

%if %{skim}
rm -f $RPM_BUILD_ROOT//opt/kde3/lib/kde*/*.{a,la}
%endif

%clean
[ -n "$RPM_BUILD_ROOT" -a "$RPM_BUILD_ROOT" != / ] && rm -rf $RPM_BUILD_ROOT

%files
%defattr(-, root, root)
%doc AUTHORS COPYING NEWS README ChangeLog
/usr/lib/scim-1.0/IMEngine/pinyin.so
/usr/lib/scim-1.0/SetupUI/pinyin-imengine-setup.so
/usr/share/scim/pinyin/*
/usr/share/scim/icons/smart-pinyin.png
%{_datadir}/locale/*/LC_MESSAGES/scim-pinyin.mo

%if %{skim}
%files skim
%defattr(-, root, root)
/opt/kde3/lib/kde*/*.so
/opt/kde3/share/apps/skim/pics/smart-pinyin.png
/opt/kde3/share/config.kcfg/smartpinyin.kcfg
/opt/kde3/share/locale/*/LC_MESSAGES/skim-scim-pinyin.mo
/opt/kde3/share/services/skimconfiguredialog/skimplugin_scim_smartpinyin_config.desktop
%endif

