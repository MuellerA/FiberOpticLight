OPENSCAD = /usr/bin/openscad
CP       = /bin/cp -a
RM       = /bin/rm -f

SCAD = fiberopticlight
STL = fiberopticlight-all fiberopticlight-center fiberopticlight-bottom fiberopticlight-top fiberopticlight-led

ALL:	$(addprefix TV/,$(addsuffix .stl,$(STL))) $(addprefix TV/,$(addsuffix .scad,$(SCAD)))

Clean:
	$(RM) TV/*

file2param = $(subst TV/fiberopticlight-,,$(subst .$(2),,$(1)))

TV/fiberopticlight-%.stl: fiberopticlight.scad
	$(OPENSCAD) -o $@ -D parts='"'$(call file2param,$@,stl)'"' $<

TV/fiberopticlight.scad: fiberopticlight.scad
	$(CP) $< $@
