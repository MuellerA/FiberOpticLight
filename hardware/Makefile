OPENSCAD = /usr/bin/openscad
CP       = /bin/cp -a
RM       = /bin/rm -f

SCAD = fiberopticlamp
STL = fiberopticlamp-main fiberopticlamp-top fiberopticlamp-bottom fiberopticlamp-ws2812 fiberopticlamp-foot

ALL:	$(addprefix TV/,$(addsuffix .stl,$(STL))) $(addprefix TV/,$(addsuffix .scad,$(SCAD)))

Clean:
	$(RM) TV/*

file2param = $(subst TV/fiberopticlamp-,,$(subst .$(2),,$(1)))

TV/fiberopticlamp-%.stl: fiberopticlamp.scad
	$(OPENSCAD) -o $@ -D mode='"'$(call file2param,$@,stl)'"' $<

TV/fiberopticlamp.scad: fiberopticlamp.scad
	$(CP) $< $@
