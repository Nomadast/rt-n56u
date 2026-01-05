/* RT-N14U board.h */

#define BOARD_PID		"RT-N14U"
#define BOARD_NAME		"RT-N14U"
#define BOARD_DESC		"ASUS RT-N14U Wireless Router"
#define BOARD_VENDOR_NAME	"ASUSTek Computer Inc."
#define BOARD_VENDOR_URL	"http://www.asus.com/"
#define BOARD_MODEL_URL		"http://www.asus.com/Networking/RTN14U/"
#define BOARD_CHIP_ID		"MT7620"

/* GPIO */
#define BOARD_GPIO_LED_INET	    0  /* Исправлено вами */
#define BOARD_GPIO_LED_POWER	4  /* Исправлено вами */
#define BOARD_GPIO_LED_LAN	    1
#define BOARD_GPIO_LED_WIFI	    72
#define BOARD_GPIO_LED_USB	    71

#define BOARD_GPIO_BTN_RESET	1
#define BOARD_GPIO_BTN_WPS	    2

/* Эфирные параметры (исправляют вашу ошибку) */
#define BOARD_HAS_5G_11AC	    0
#define BOARD_NUM_ANT		    2
#define BOARD_NUM_ANT_2G_TX	    2
#define BOARD_NUM_ANT_2G_RX	    2
#define BOARD_NUM_ANT_5G_TX	    0
#define BOARD_NUM_ANT_5G_RX	    0

/* Параметры портов (исправляют ошибку EPHY_1000) */
#define BOARD_HAS_EPHY_L1000    0
#define BOARD_HAS_EPHY_W1000    0
#define BOARD_NUM_ETH_LEDS	    0
#define BOARD_HAS_EPHY_LNK_LED	1
#define BOARD_HAS_EPHY_WPD	    1
