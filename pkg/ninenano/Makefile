PKG_NAME=ninenano
PKG_URL=git://git.8pit.net/ninenano.git
PKG_VERSION=ca78f888a2453a6e29e66dbf6ed88282b67d5a45
PKG_LICENSE=GPL-3.0+

.PHONY: all

all: git-download
	"$(MAKE)" MODULE=$(PKG_NAME) -C $(PKG_BUILDDIR)/9p

include $(RIOTBASE)/pkg/pkg.mk
