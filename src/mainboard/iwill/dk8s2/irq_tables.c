/* This file was generated by getpir.c, do not modify!
   (but if you do, please run checkpir on it to verify)
 * Contains the IRQ Routing Table dumped directly from your memory, which BIOS sets up
 *
 * Documentation at : http://www.microsoft.com/hwdev/busbios/PCIIRQ.HTM
*/

#include <arch/pirq_routing.h>

static const struct irq_routing_table intel_irq_routing_table = {
	PIRQ_SIGNATURE,  /* u32 signature */
	PIRQ_VERSION,    /* u16 version   */
	32+16*CONFIG_IRQ_SLOT_COUNT,	 /* there can be total CONFIG_IRQ_SLOT_COUNT devices on the bus */
	0x00,		 /* Where the interrupt router lies (bus) */
	(0x07<<3)|0x3,   /* Where the interrupt router lies (dev) */
	0,		 /* IRQs devoted exclusively to PCI usage */
	0x1022,		 /* Vendor */
	0x746b,		 /* Device */
	0,		 /* Miniport data */
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, /* u8 rfu[11] */
	0x6d,         /*  u8 checksum , this hase to set to some value that would give 0 after the sum of all bytes for this structure (including checksum) */
	{
		/* bus,     dev|fn,   {link, bitmap}, {link, bitmap}, {link, bitmap}, {link, bitmap},  slot, rfu */
		{0x00,(0x07<<3)|0x0, {{0x01, 0xdef8}, {0x02, 0xdef8}, {0x03, 0xdef8}, {0x04, 0x0def8}}, 0x0, 0x0},
		{0x03,(0x00<<3)|0x0, {{0x00, 0x0000}, {0x00, 0x0000}, {0x00, 0x0000}, {0x04, 0x0def8}}, 0x0, 0x0},
		{0x02,(0x01<<3)|0x0, {{0x02, 0xdef8}, {0x03, 0xdef8}, {0x04, 0xdef8}, {0x01, 0x0def8}}, 0x1, 0x0},
		{0x02,(0x02<<3)|0x0, {{0x03, 0xdef8}, {0x04, 0xdef8}, {0x01, 0xdef8}, {0x02, 0x0def8}}, 0x2, 0x0},
		{0x01,(0x01<<3)|0x0, {{0x02, 0xdef8}, {0x03, 0xdef8}, {0x04, 0xdef8}, {0x01, 0x0def8}}, 0x3, 0x0},
		{0x01,(0x02<<3)|0x0, {{0x03, 0xdef8}, {0x04, 0xdef8}, {0x01, 0xdef8}, {0x02, 0x0def8}}, 0x4, 0x0},
		{0x03,(0x04<<3)|0x0, {{0x01, 0xdef8}, {0x02, 0xdef8}, {0x03, 0xdef8}, {0x04, 0x0def8}}, 0x5, 0x0},
		{0x03,(0x05<<3)|0x0, {{0x02, 0xdef8}, {0x03, 0xdef8}, {0x04, 0xdef8}, {0x01, 0x0def8}}, 0x6, 0x0},
		{0x03,(0x06<<3)|0x0, {{0x03, 0xdef8}, {0x00, 0x0000}, {0x00, 0x0000}, {0x00, 0x00000}}, 0x0, 0x0},
		{0x02,(0x03<<3)|0x0, {{0x04, 0xdef8}, {0x00, 0x0000}, {0x00, 0x0000}, {0x00, 0x00000}}, 0x0, 0x0},
		{0x02,(0x04<<3)|0x0, {{0x01, 0xdef8}, {0x00, 0x0000}, {0x00, 0x0000}, {0x00, 0x00000}}, 0x0, 0x0},
		{0x02,(0x05<<3)|0x0, {{0x02, 0xdef8}, {0x00, 0x0000}, {0x00, 0x0000}, {0x00, 0x00000}}, 0x0, 0x0},
	}
};
unsigned long write_pirq_routing_table(unsigned long addr)
{
        return copy_pirq_routing_table(addr, &intel_irq_routing_table);
}
