/* RT-N14U board.h */

#define BOARD_PID		"RT-N14U"
#define BOARD_NAME		"RT-N14U"
#define BOARD_DESC		"ASUS RT-N14U Wireless Router"
#define BOARD_VENDOR_NAME	"ASUSTek Computer Inc."
#define BOARD_VENDOR_URL	"http://www.asus.com/"
#define BOARD_MODEL_URL		"http://www.asus.com/Networking/RTN14U/"
#define BOARD_CHIP_ID		"MT7620"

/* GPIO (светодиоды) */
#define BOARD_GPIO_LED_INET     0
#define BOARD_GPIO_LED_POWER    4
#define BOARD_GPIO_LED_LAN      1
#define BOARD_GPIO_LED_WIFI     72
#define BOARD_GPIO_LED_USB      71

#define BOARD_GPIO_BTN_RESET    1
#define BOARD_GPIO_BTN_WPS      2

/* Физика портов (Критично для пинга!) */
#define BOARD_HAS_5G_11AC       0
#define BOARD_NUM_ANT           2
#define BOARD_NUM_ETH_LEDS      0
#define BOARD_HAS_EPHY_LNK_LED  1
#define BOARD_HAS_EPHY_WPD      1

/* Настройка коммутатора для 100-мегабитных портов */
#define BOARD_HAS_EPHY_L1000    0
#define BOARD_HAS_EPHY_W1000    0

/* Принудительная схема портов: 4 LAN + 1 WAN внутри MT7620 */
#define BOARD_LAN_PORT_COUNT    4
#define BOARD_WAN_PORT_ID       4
