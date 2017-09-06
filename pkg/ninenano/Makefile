PKG_NAME=ninenano
PKG_URL=git://git.8pit.net/ninenano.git
PKG_VERSION=6b7f309f786638323781a3a6be3beeefbb8e0b77
PKG_LICENSE=GPL-3.0+

.PHONY: all

all: git-download
	"$(MAKE)" MODULE=$(PKG_NAME) -C $(PKG_BUILDDIR)/9p

include $(RIOTBASE)/pkg/pkg.mk
