OPENSCAD = /usr/bin/openscad
CP       = /bin/cp -a
RM       = /bin/rm -f

SCAD 	= fiberopticlight
STL 	= fiberopticlight-center fiberopticlight-bottom fiberopticlight-top fiberopticlight-led
IMG 	= fiberopticlight.jpg step1.jpg

ALL:	$(addprefix TV/,$(addsuffix .stl,$(STL))) $(addprefix TV/,$(addsuffix .scad,$(SCAD))) $(addprefix TV/,$(IMG))

Clean:
	$(RM) TV/*

file2param = $(subst TV/fiberopticlight-,,$(subst .$(2),,$(1)))

TV/fiberopticlight-%.stl: fiberopticlight.scad
	$(OPENSCAD) -o $@ -D parts='"'$(call file2param,$@,stl)'"' $<

TV/fiberopticlight.scad: fiberopticlight.scad
	$(CP) $< $@

TV/%.jpg: ../images/%.jpg
	$(CP) $< $@
