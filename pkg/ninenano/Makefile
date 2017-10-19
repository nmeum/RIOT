PKG_NAME=ninenano
PKG_URL=git://git.8pit.net/ninenano.git
PKG_VERSION=d7268bb540c952ee42e22d32403bd395d011fc5c
PKG_LICENSE=GPL-3.0+

.PHONY: all

all: git-download
	"$(MAKE)" MODULE=$(PKG_NAME) -C $(PKG_BUILDDIR)/9p

include $(RIOTBASE)/pkg/pkg.mk
