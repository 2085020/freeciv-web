# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995-1997, 2000, 2001 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
#
# This file file be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = freeciv
VERSION = 2.2.99-dev

# These two variables depend on the location of this directory.
subdir = po
top_builddir = ..

SHELL = /bin/sh


srcdir = .
top_srcdir = ..


prefix = /usr/local
exec_prefix = ${prefix}
datadir = ${prefix}/share
localedir = ${prefix}/share/locale
gettextsrcdir = $(datadir)/gettext/po

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
MKINSTALLDIRS = bootstrap/mkinstalldirs
mkinstalldirs = $(SHELL) `case "$(MKINSTALLDIRS)" in /*) echo "$(MKINSTALLDIRS)" ;; *) echo "$(top_builddir)/$(MKINSTALLDIRS)" ;; esac`

CC = gcc
GMSGFMT = /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = /usr/bin/xgettext
MSGMERGE = msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -save-temps -Wall -Wpointer-arith -Wcast-align -Wmissing-prototypes -Wmissing-declarations -g -O2 -fsigned-char -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include  
CPPFLAGS =  -DLOCALEDIR="\"${datarootdir}/locale\"" -DDEFAULT_DATA_PATH="\".:data:~/.freeciv/2.3:${datarootdir}/freeciv:/mnt/savegames\""

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

POFILES =  ar.po cs.po ca.po da.po de.po el.po en_GB.po eo.po es.po et.po fa.po fi.po fr.po he.po hu.po it.po ja.po ko.po lt.po nl.po nb.po no.po pl.po pt.po pt_BR.po ro.po ru.po sv.po tr.po uk.po zh_CN.po
GMOFILES =  ar.gmo cs.gmo ca.gmo da.gmo de.gmo el.gmo en_GB.gmo eo.gmo es.gmo et.gmo fa.gmo fi.gmo fr.gmo he.gmo hu.gmo it.gmo ja.gmo ko.gmo lt.gmo nl.gmo nb.gmo no.gmo pl.gmo pt.gmo pt_BR.gmo ro.gmo ru.gmo sv.gmo tr.gmo uk.gmo zh_CN.gmo

# Keep this in one line, since configure replaces it when NLS disabled
DISTFILES = ChangeLog Makefile.in.in POTFILES.in POTFILES.skip $(PACKAGE).pot $(POFILES) $(GMOFILES)

POTFILES = \
	../common/city.c \
	../common/connection.c \
	../common/effects.c \
	../common/events.c \
	../common/game.c \
	../common/map.c \
	../common/packets.c \
	../common/player.c \
	../common/requirements.c \
	../common/team.c \
	../common/tech.c \
	../common/terrain.c \
	../common/unit.c \
	../common/unittype.c \
	../common/version.c \
	../common/aicore/cm.c \
	../utility/fciconv.c \
	../utility/inputfile.c \
	../utility/ioz.c \
	../utility/log.c \
	../utility/mem.c \
	../utility/netintf.c \
	../utility/registry.c \
	../utility/shared.c \
	../utility/support.c \
	../ai/aicity.c \
	../ai/advdiplomacy.c \
	../server/auth.c \
	../server/barbarian.c \
	../server/cityhand.c \
	../server/citytools.c \
	../server/cityturn.c \
	../server/civserver.c \
	../server/commands.c \
	../server/connecthand.c \
	../server/console.c \
	../server/diplhand.c \
	../server/diplomats.c \
	../server/edithand.c \
	../server/gamehand.c \
	../server/ggzserver.c \
	../server/handchat.c \
	../server/maphand.c \
	../server/meta.c \
	../server/plrhand.c \
	../server/report.c \
	../server/ruleset.c \
	../server/savegame.c \
	../server/settings.c \
	../server/sernet.c \
	../server/spacerace.c \
	../server/srv_main.c \
	../server/stdinhand.c \
	../server/techtools.c \
	../server/unithand.c \
	../server/unittools.c \
	../server/voting.c \
	../server/generator/mapgen.c \
	../server/generator/startpos.c \
	../client/attribute.c \
	../client/audio.c \
	../client/chatline_common.c \
	../client/citydlg_common.c \
	../client/cityrepdata.c \
	../client/client_main.c \
	../client/climisc.c \
	../client/clinet.c \
	../client/connectdlg_common.c \
	../client/control.c \
	../client/editor.c \
	../client/ggzclient.c \
	../client/helpdata.c \
	../client/mapctrl_common.c \
	../client/mapview_common.c \
	../client/messagewin_common.c \
	../client/options.c \
	../client/packhand.c \
	../client/plrdlg_common.c \
	../client/repodlgs_common.c \
	../client/servers.c \
	../client/text.c \
	../client/tilespec.c \
	../client/agents/cma_core.c \
	../client/agents/cma_fec.c \
	../client/gui-gtk-2.0/connectdlg.c \
	../client/gui-gtk-2.0/diplomat_dialog.c \
	../client/gui-gtk-2.0/caravan_dialog.c \
	../client/gui-gtk-2.0/chatline.c \
	../client/gui-gtk-2.0/citydlg.c \
	../client/gui-gtk-2.0/cityrep.c \
	../client/gui-gtk-2.0/cma_fe.c \
	../client/gui-gtk-2.0/connectdlg.c \
	../client/gui-gtk-2.0/dialogs.c \
	../client/gui-gtk-2.0/diplodlg.c \
	../client/gui-gtk-2.0/editgui.c \
	../client/gui-gtk-2.0/editprop.c \
	../client/gui-gtk-2.0/finddlg.c \
	../client/gui-gtk-2.0/gamedlgs.c \
	../client/gui-gtk-2.0/gotodlg.c \
	../client/gui-gtk-2.0/gui_main.c \
	../client/gui-gtk-2.0/gui_stuff.c \
	../client/gui-gtk-2.0/happiness.c \
	../client/gui-gtk-2.0/helpdlg.c \
	../client/gui-gtk-2.0/inputdlg.c \
	../client/gui-gtk-2.0/inteldlg.c \
	../client/gui-gtk-2.0/mapctrl.c \
	../client/gui-gtk-2.0/mapview.c \
	../client/gui-gtk-2.0/menu.c \
	../client/gui-gtk-2.0/messagedlg.c \
	../client/gui-gtk-2.0/messagewin.c \
	../client/gui-gtk-2.0/plrdlg.c \
	../client/gui-gtk-2.0/pages.c \
	../client/gui-gtk-2.0/repodlgs.c \
	../client/gui-gtk-2.0/spaceshipdlg.c \
	../client/gui-gtk-2.0/theme_dlg.c \
	../client/gui-gtk-2.0/tileset_dlg.c \
	../client/gui-gtk-2.0/wldlg.c \
	../client/gui-sdl/caravan_dialog.c \
	../client/gui-sdl/chatline.c \
	../client/gui-sdl/citydlg.c \
	../client/gui-sdl/cityrep.c \
	../client/gui-sdl/cma_fe.c \
	../client/gui-sdl/connectdlg.c \
	../client/gui-sdl/dialogs.c \
	../client/gui-sdl/diplodlg.c \
	../client/gui-sdl/diplomat_dialog.c \
	../client/gui-sdl/finddlg.c \
	../client/gui-sdl/gotodlg.c \
	../client/gui-sdl/graphics.c \
	../client/gui-sdl/gui_main.c \
	../client/gui-sdl/gui_string.c \
	../client/gui-sdl/gui_tilespec.c \
	../client/gui-sdl/helpdlg.c \
	../client/gui-sdl/inteldlg.c \
	../client/gui-sdl/mapctrl.c \
	../client/gui-sdl/mapview.c \
	../client/gui-sdl/menu.c \
	../client/gui-sdl/messagewin.c \
	../client/gui-sdl/optiondlg.c \
	../client/gui-sdl/pages.c \
	../client/gui-sdl/plrdlg.c \
	../client/gui-sdl/repodlgs.c \
	../client/gui-sdl/spaceshipdlg.c \
	../client/gui-sdl/sprite.c \
	../client/gui-sdl/themes.c \
	../client/gui-sdl/themespec.c \
	../client/gui-sdl/wldlg.c \
	../client/gui-win32/canvas.c \
	../client/gui-win32/chatline.c \
	../client/gui-win32/citydlg.c \
	../client/gui-win32/cityrep.c \
	../client/gui-win32/cma_fe.c \
	../client/gui-win32/connectdlg.c \
	../client/gui-win32/dialogs.c \
	../client/gui-win32/diplodlg.c \
	../client/gui-win32/finddlg.c \
	../client/gui-win32/gotodlg.c \
	../client/gui-win32/gui_main.c \
	../client/gui-win32/happiness.c \
	../client/gui-win32/helpdlg.c \
	../client/gui-win32/inputdlg.c \
	../client/gui-win32/inteldlg.c \
	../client/gui-win32/mapctrl.c \
	../client/gui-win32/mapview.c \
	../client/gui-win32/menu.c \
	../client/gui-win32/messagedlg.c \
	../client/gui-win32/messagewin.c \
	../client/gui-win32/optiondlg.c \
	../client/gui-win32/plrdlg.c \
	../client/gui-win32/ratesdlg.c \
	../client/gui-win32/repodlgs.c \
	../client/gui-win32/spaceshipdlg.c \
	../client/gui-win32/wldlg.c \
	../client/gui-xaw/chatline.c \
	../client/gui-xaw/citydlg.c \
	../client/gui-xaw/cityrep.c \
	../client/gui-xaw/cma_fe.c \
	../client/gui-xaw/colors.c \
	../client/gui-xaw/connectdlg.c \
	../client/gui-xaw/dialogs.c \
	../client/gui-xaw/diplodlg.c \
	../client/gui-xaw/diplomat_dialog.c \
	../client/gui-xaw/graphics.c \
	../client/gui-xaw/gui_main.c \
	../client/gui-xaw/helpdlg.c \
	../client/gui-xaw/inputdlg.c \
	../client/gui-xaw/inteldlg.c \
	../client/gui-xaw/mapctrl.c \
	../client/gui-xaw/mapview.c \
	../client/gui-xaw/menu.c \
	../client/gui-xaw/messagedlg.c \
	../client/gui-xaw/messagewin.c \
	../client/gui-xaw/optiondlg.c \
	../client/gui-xaw/pages.c \
	../client/gui-xaw/plrdlg.c \
	../client/gui-xaw/ratesdlg.c \
	../client/gui-xaw/repodlgs.c \
	../client/gui-xaw/wldlg.c \
	../manual/civmanual.c \
	../data/Freeciv.in \
	../data/helpdata.txt \
	../data/default/buildings.ruleset \
	../data/default/nations.ruleset \
	../data/civ2/buildings.ruleset \
	../data/civ1/buildings.ruleset \
	../data/default/cities.ruleset \
	../data/civ2/cities.ruleset \
	../data/default/governments.ruleset \
	../data/civ2/governments.ruleset \
	../data/civ1/governments.ruleset \
	../data/default/script.lua \
	../data/default/techs.ruleset \
	../data/civ2/techs.ruleset \
	../data/civ1/techs.ruleset \
	../data/default/terrain.ruleset \
	../data/civ2/terrain.ruleset \
	../data/civ1/terrain.ruleset \
	../data/default/units.ruleset \
	../data/civ2/units.ruleset \
	../data/civ1/units.ruleset \
	../data/nation/aborigines.ruleset \
	../data/nation/afghani.ruleset \
	../data/nation/ainu.ruleset \
	../data/nation/akwe.ruleset \
	../data/nation/algerian.ruleset \
	../data/nation/american.ruleset \
	../data/nation/antarctican.ruleset \
	../data/nation/arab.ruleset \
	../data/nation/aramean.ruleset \
	../data/nation/argentine.ruleset \
	../data/nation/armenian.ruleset \
	../data/nation/assyrian.ruleset \
	../data/nation/australian.ruleset \
	../data/nation/austrian.ruleset \
	../data/nation/aymara.ruleset \
	../data/nation/azeri.ruleset \
	../data/nation/aztec.ruleset \
	../data/nation/babylonian.ruleset \
	../data/nation/barbarian.ruleset \
	../data/nation/basque.ruleset \
	../data/nation/bavarian.ruleset \
	../data/nation/belarusian.ruleset \
	../data/nation/belgian.ruleset \
	../data/nation/bengali.ruleset \
	../data/nation/boer.ruleset \
	../data/nation/bosnia.ruleset \
	../data/nation/brazilian.ruleset \
	../data/nation/breton.ruleset \
	../data/nation/british.ruleset \
	../data/nation/bulgarian.ruleset \
	../data/nation/burgundian.ruleset \
	../data/nation/burmese.ruleset \
	../data/nation/burundi.ruleset \
	../data/nation/byzantium.ruleset \
	../data/nation/cambodian.ruleset \
	../data/nation/canadian.ruleset \
	../data/nation/carthaginian.ruleset \
	../data/nation/catalan.ruleset \
	../data/nation/cherokee.ruleset \
	../data/nation/chilean.ruleset \
	../data/nation/chinese.ruleset \
	../data/nation/chola.ruleset \
	../data/nation/colombian.ruleset \
	../data/nation/confederate.ruleset \
	../data/nation/cornish.ruleset \
	../data/nation/cree.ruleset \
	../data/nation/croatian.ruleset \
	../data/nation/cuban.ruleset \
	../data/nation/czech.ruleset \
	../data/nation/danish.ruleset \
	../data/nation/dominican.ruleset \
	../data/nation/dutch.ruleset \
	../data/nation/egyptian.ruleset \
	../data/nation/emirati.ruleset \
	../data/nation/english.ruleset \
	../data/nation/esperant.ruleset \
	../data/nation/estonian.ruleset \
	../data/nation/ethiopian.ruleset \
	../data/nation/european.ruleset \
	../data/nation/filipino.ruleset \
	../data/nation/finnish.ruleset \
	../data/nation/french.ruleset \
	../data/nation/galician.ruleset \
	../data/nation/gallic.ruleset \
	../data/nation/georgian.ruleset \
	../data/nation/german.ruleset \
	../data/nation/greek.ruleset \
	../data/nation/gupta.ruleset \
	../data/nation/hacker.ruleset \
	../data/nation/hawaiian.ruleset \
	../data/nation/hellenic.ruleset \
	../data/nation/himyarite.ruleset \
	../data/nation/hittite.ruleset \
	../data/nation/hopi.ruleset \
	../data/nation/hungarian.ruleset \
	../data/nation/icelandic.ruleset \
	../data/nation/illyrian.ruleset \
	../data/nation/inca.ruleset \
	../data/nation/indian.ruleset \
	../data/nation/indonesian.ruleset \
	../data/nation/inuit.ruleset \
	../data/nation/iranian.ruleset \
	../data/nation/iraqi.ruleset \
	../data/nation/irish.ruleset \
	../data/nation/iroquois.ruleset \
	../data/nation/israeli.ruleset \
	../data/nation/italian.ruleset \
	../data/nation/japanese.ruleset \
	../data/nation/kanem-bornu.ruleset \
	../data/nation/kazakh.ruleset \
	../data/nation/kenyan.ruleset \
	../data/nation/khwarezmian.ruleset \
	../data/nation/kongo.ruleset \
	../data/nation/korean.ruleset \
	../data/nation/kurd.ruleset \
	../data/nation/kyrgyz.ruleset \
	../data/nation/lankese.ruleset \
	../data/nation/laotian.ruleset \
	../data/nation/latvian.ruleset \
	../data/nation/libyan.ruleset \
	../data/nation/lithuanian.ruleset \
	../data/nation/lojbanistani.ruleset \
	../data/nation/majapahit.ruleset \
	../data/nation/malagasy.ruleset \
	../data/nation/malaysian.ruleset \
	../data/nation/malian.ruleset \
	../data/nation/manchu.ruleset \
	../data/nation/maori.ruleset \
	../data/nation/mapuche.ruleset \
	../data/nation/martian.ruleset \
	../data/nation/mayan.ruleset \
	../data/nation/mexican.ruleset \
	../data/nation/moldovan.ruleset \
	../data/nation/mongol.ruleset \
	../data/nation/muskogee.ruleset \
	../data/nation/newzealand.ruleset \
	../data/nation/nigerian.ruleset \
	../data/nation/norman.ruleset \
	../data/nation/northkorean.ruleset \
	../data/nation/norwegian.ruleset \
	../data/nation/nubian.ruleset \
	../data/nation/numidian.ruleset \
	../data/nation/nuu-chah-nulth.ruleset \
	../data/nation/ottoman.ruleset \
	../data/nation/pakistani.ruleset \
	../data/nation/papuan.ruleset \
	../data/nation/persian.ruleset \
	../data/nation/peruvian.ruleset \
	../data/nation/phoenician.ruleset \
	../data/nation/pirate.ruleset \
	../data/nation/polish.ruleset \
	../data/nation/polynesian.ruleset \
	../data/nation/portuguese.ruleset \
	../data/nation/prussian.ruleset \
	../data/nation/purhepecha.ruleset \
	../data/nation/quebecois.ruleset \
	../data/nation/romanian.ruleset \
	../data/nation/roman.ruleset \
	../data/nation/russian.ruleset \
	../data/nation/rwandan.ruleset \
	../data/nation/ryukyuan.ruleset \
	../data/nation/sami.ruleset \
	../data/nation/samogitian.ruleset \
	../data/nation/saxon.ruleset \
	../data/nation/scottish.ruleset \
	../data/nation/serbian.ruleset \
	../data/nation/silesian.ruleset \
	../data/nation/singaporean.ruleset \
	../data/nation/sioux.ruleset \
	../data/nation/slovakian.ruleset \
	../data/nation/slovenian.ruleset \
	../data/nation/southafrican.ruleset \
	../data/nation/southkorean.ruleset \
	../data/nation/soviet.ruleset \
	../data/nation/spanish.ruleset \
	../data/nation/srivijaya.ruleset \
	../data/nation/sudanese.ruleset \
	../data/nation/sumerian.ruleset \
	../data/nation/swazi.ruleset \
	../data/nation/swedish.ruleset \
	../data/nation/swiss.ruleset \
	../data/nation/syrian.ruleset \
	../data/nation/taino.ruleset \
	../data/nation/tairona.ruleset \
	../data/nation/taiwanese.ruleset \
	../data/nation/tajik.ruleset \
	../data/nation/templar.ruleset \
	../data/nation/texan.ruleset \
	../data/nation/thai.ruleset \
	../data/nation/thracian.ruleset \
	../data/nation/tibetan.ruleset \
	../data/nation/tocharian.ruleset \
	../data/nation/tunisian.ruleset \
	../data/nation/tupi.ruleset \
	../data/nation/turkmen.ruleset \
	../data/nation/turk.ruleset \
	../data/nation/ukrainian.ruleset \
	../data/nation/un.ruleset \
	../data/nation/uruguayan.ruleset \
	../data/nation/uyghur.ruleset \
	../data/nation/uzbek.ruleset \
	../data/nation/venezuelan.ruleset \
	../data/nation/vietnamese.ruleset \
	../data/nation/viking.ruleset \
	../data/nation/welsh.ruleset \
	../data/nation/westphalian.ruleset \
	../data/nation/zulu.ruleset \
	../data/scenario/british-isles-85x80-v2.80.sav \
	../data/scenario/earth-160x90-v2.sav \
	../data/scenario/earth-80x50-v2.sav \
	../data/scenario/europe-200x100-v2.sav \
	../data/scenario/hagworld-120x60-v1.2.sav \
	../data/scenario/iberian-peninsula-136x100-v1.0.sav \
	../data/scenario/tutorial.sav \
	../data/civ1/game.ruleset \
	../data/civ2/game.ruleset \
	../data/default/game.ruleset

CATALOGS =  ar.gmo cs.gmo ca.gmo da.gmo de.gmo el.gmo en_GB.gmo eo.gmo es.gmo et.gmo fa.gmo fi.gmo fr.gmo he.gmo hu.gmo it.gmo ja.gmo ko.gmo lt.gmo nl.gmo nb.gmo no.gmo pl.gmo pt.gmo pt_BR.gmo ro.gmo ru.gmo sv.gmo tr.gmo uk.gmo zh_CN.gmo

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=$(srcdir)/`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -c --statistics -o $$file $<


all: all-yes

all-yes: $(CATALOGS)
all-no:

# Note: Target 'all' must not depend on target '$(srcdir)/$(PACKAGE).pot',
# otherwise packages like GCC can not be built if only parts of the source
# have been downloaded.

$(srcdir)/$(PACKAGE).pot: $(POTFILES) $(srcdir)/POTFILES.in
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments="TRANS:" --escape --keyword=_ --keyword=N_ --keyword=Q_ --keyword=PL_:1,2 \
	  --language=C --files-from=$(srcdir)/POTFILES.in \
	&& test ! -f $(PACKAGE).po \
	   || ( rm -f $(srcdir)/$(PACKAGE).pot \
		&& mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot )


install: install-exec install-data
install-exec:
install-data: install-data-yes
	if test "$(PACKAGE)" = "gettext"; then \
	  $(mkinstalldirs) $(DESTDIR)$(gettextsrcdir); \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi
install-data-no: all
install-data-yes: all
	$(mkinstalldirs) $(DESTDIR)$(datadir)
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkinstalldirs) $(DESTDIR)$$dir; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $(DESTDIR)$$dir/$(PACKAGE).mo; \
	    echo "installing $$cat as $(DESTDIR)$$dir/$(PACKAGE).mo"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $(DESTDIR)$$dir/$(PACKAGE).mo; \
	    echo "installing $(srcdir)/$$cat as" \
		 "$(DESTDIR)$$dir/$(PACKAGE).mo"; \
	  fi; \
	done

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\.gmo$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE).mo; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  rm -f $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

check: all

dvi info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.new.po
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

# If you change following line, update also configure.ac where it
# builds Makefile if NLS disabled.
dist distdir:
	$(MAKE) update-po
	@$(MAKE) dist2
# This is a separate target because 'update-po' must be executed before.
dist2: $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  if test -f $$file; then dir=.; else dir=$(srcdir); fi; \
	  cp -p $$dir/$$file $(distdir); \
	done

# If you change following line, update also configure.ac where it
# builds Makefile if NLS disabled.
update-po: Makefile nb.po
	$(MAKE) $(PACKAGE).pot
	if test "$(PACKAGE)" = "gettext"; then PATH=`pwd`/../src:$$PATH; fi; \
	cd $(srcdir); \
	catalogs='$(GMOFILES)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\.gmo$$//'`; \
	  if test -x "$(builddir)/$$lang.po" ; then \
	    dir="$(builddir)"; \
	  else \
	    dir=. ; \
	  fi; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$dir/$$lang.po $(PACKAGE).pot -o $$lang.new.po; then \
	    mv -f $$lang.new.po $$dir/$$lang.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.new.po; \
	  fi; \
	done
	$(MAKE) update-gmo

update-gmo: Makefile $(GMOFILES)
	@:

nb.po: no.po
	cp $(srcdir)/no.po nb.po

BUILT_SOURCES = nb.po

Makefile: Makefile.in.in $(top_builddir)/config.status POTFILES.in
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@.in CONFIG_HEADERS= \
	       $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
