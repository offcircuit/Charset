uint8_t sift (uint8_t character, uint8_t row) {
  uint16_t bitset = uint16_t(row << 8) | character;

  if (!(
        (bitset ^ 0x028) && (bitset ^ 0x034) && (bitset ^ 0x03C) && (bitset ^ 0x066) && (bitset ^ 0x06A) &&
        (bitset ^ 0x133) && (bitset ^ 0x14A) && (bitset ^ 0x15D) &&
        (bitset ^ 0x225) && (bitset ^ 0x227) && (bitset ^ 0x229) && (bitset ^ 0x22F) && (bitset ^ 0x237) && (bitset ^ 0x23E) && (bitset ^ 0x24A) && (bitset ^ 0x25A) && (bitset ^ 0x25D) &&
        (bitset ^ 0x26A) &&
        (bitset ^ 0x329) && (bitset ^ 0x332) && (bitset ^ 0x333) && (bitset ^ 0x33F) && (bitset ^ 0x34A) && (bitset ^ 0x35D) && (bitset ^ 0x36A) && (bitset ^ 0x37A) && (bitset ^ 0x37D) &&
        (bitset ^ 0x429) && (bitset ^ 0x43E) && (bitset ^ 0x44A) && (bitset ^ 0x45C) && (bitset ^ 0x45D) && (bitset ^ 0x46A) &&
        (bitset ^ 0x534) && (bitset ^ 0x539) && (bitset ^ 0x55D) &&
        (bitset ^ 0x628) && (bitset ^ 0x634) && (bitset ^ 0x63C) && (bitset ^ 0x674)
      )) return 2;

  else if (!(
             (bitset ^ 0x07B) &&
             (bitset ^ 0x625) && (bitset ^ 0x67B)
           )) return 3;

  else if (!(
             (bitset ^ 0x021) && (bitset ^ 0x024) && (bitset ^ 0x031) && (bitset ^ 0x05E) && (bitset ^ 0x069) && (bitset ^ 0x07C) && (bitset ^ 0x121) && (bitset ^ 0x128) && (bitset ^ 0x129) &&
             (bitset ^ 0x12A) && (bitset ^ 0x12B) && (bitset ^ 0x13C) && (bitset ^ 0x13E) && (bitset ^ 0x149) && (bitset ^ 0x154) && (bitset ^ 0x160) && (bitset ^ 0x16C) && (bitset ^ 0x174) &&
             (bitset ^ 0x17B) && (bitset ^ 0x17C) && (bitset ^ 0x17D) && (bitset ^ 0x221) && (bitset ^ 0x22B) && (bitset ^ 0x231) && (bitset ^ 0x233) && (bitset ^ 0x249) && (bitset ^ 0x254) &&
             (bitset ^ 0x266) && (bitset ^ 0x26C) && (bitset ^ 0x27B) && (bitset ^ 0x27C) && (bitset ^ 0x27D) && (bitset ^ 0x321) && (bitset ^ 0x325) && (bitset ^ 0x32F) && (bitset ^ 0x331) &&
             (bitset ^ 0x337) && (bitset ^ 0x349) && (bitset ^ 0x354) && (bitset ^ 0x358) && (bitset ^ 0x359) && (bitset ^ 0x35A) && (bitset ^ 0x35C) && (bitset ^ 0x369) && (bitset ^ 0x36C) &&
             (bitset ^ 0x374) && (bitset ^ 0x37C) &&
             (bitset ^ 0x421) && (bitset ^ 0x42B) && (bitset ^ 0x431) && (bitset ^ 0x432) && (bitset ^ 0x437) && (bitset ^ 0x43F) && (bitset ^ 0x449) && (bitset ^ 0x454) && (bitset ^ 0x459) && 
             (bitset ^ 0x466) && (bitset ^ 0x469) && (bitset ^ 0x46C) && (bitset ^ 0x474) && (bitset ^ 0x478) && (bitset ^ 0x47A) && (bitset ^ 0x47B) && (bitset ^ 0x47C) && (bitset ^ 0x47D) &&
             (bitset ^ 0x528) && (bitset ^ 0x529) && (bitset ^ 0x52A) && (bitset ^ 0x52B) && (bitset ^ 0x52C) && (bitset ^ 0x531) && (bitset ^ 0x537) && (bitset ^ 0x53B) && (bitset ^ 0x53C) &&
             (bitset ^ 0x53E) && (bitset ^ 0x549) && (bitset ^ 0x554) && (bitset ^ 0x559) && (bitset ^ 0x566) && (bitset ^ 0x569) && (bitset ^ 0x56C) && (bitset ^ 0x579) && (bitset ^ 0x57B) &&
             (bitset ^ 0x57C) && (bitset ^ 0x57D) &&
             (bitset ^ 0x621) && (bitset ^ 0x624) && (bitset ^ 0x637) && (bitset ^ 0x63F) && (bitset ^ 0x654) && (bitset ^ 0x656) && (bitset ^ 0x659) && (bitset ^ 0x666) && (bitset ^ 0x676) && 
             (bitset ^ 0x67C)
           )) return 4;

  else if (!(
             (bitset ^ 0x166) &&
             (bitset ^ 0x424) &&
             (bitset ^ 0x574)
           )) return 5;


  else if (!(
             (bitset ^ 0x027) && (bitset ^ 0x036) &&
             (bitset ^ 0x127) && (bitset ^ 0x134) &&
             (bitset ^ 0x378) &&
             (bitset ^ 0x479)
           )) return 6;

  else if (!(
             (bitset ^ 0x04A)
           )) return 7;

  else if (!(
             (bitset ^ 0x029) && (bitset ^ 0x03E) && (bitset ^ 0x06B) &&
             (bitset ^ 0x136) && (bitset ^ 0x15B) && (bitset ^ 0x16B) &&
             (bitset ^ 0x23C) && (bitset ^ 0x25B) && (bitset ^ 0x25C) && (bitset ^ 0x260) && (bitset ^ 0x228) &&
             (bitset ^ 0x326) && (bitset ^ 0x328) && (bitset ^ 0x35B) && (bitset ^ 0x37B) &&
             (bitset ^ 0x425) && (bitset ^ 0x428) && (bitset ^ 0x42F) && (bitset ^ 0x43C) && (bitset ^ 0x45A) && (bitset ^ 0x45B) && (bitset ^ 0x472) &&
             (bitset ^ 0x532) && (bitset ^ 0x55B) && (bitset ^ 0x572) && (bitset ^ 0x57A) &&
             (bitset ^ 0x629) && (bitset ^ 0x62C) && (bitset ^ 0x63B) && (bitset ^ 0x63E) && (bitset ^ 0x672)
           )) return 8;

  else if (!(
             (bitset ^ 0x26B) &&
             (bitset ^ 0x379) &&
             (bitset ^ 0x66B)
           )) return 9;

  else if (!(
             (bitset ^ 0x022) && (bitset ^ 0x023) &&
             (bitset ^ 0x122) && (bitset ^ 0x123) && (bitset ^ 0x15E) &&
             (bitset ^ 0x222) && (bitset ^ 0x234) && (bitset ^ 0x258) && (bitset ^ 0x259) &&
             (bitset ^ 0x323) && (bitset ^ 0x36B) &&
             (bitset ^ 0x458) &&
             (bitset ^ 0x523) && (bitset ^ 0x556) && (bitset ^ 0x56B) && (bitset ^ 0x576) &&
             (bitset ^ 0x623) && (bitset ^ 0x677)
           )) return 10;

  else if (!(
             (bitset ^ 0x272)
           )) return 11;

  else if (!(
             (bitset ^ 0x026) && (bitset ^ 0x060) && (bitset ^ 0x06C) &&
             (bitset ^ 0x131) && (bitset ^ 0x13A) && (bitset ^ 0x13B) &&
             (bitset ^ 0x23A) && (bitset ^ 0x23B) && (bitset ^ 0x269) &&
             (bitset ^ 0x372) &&
             (bitset ^ 0x42C) && (bitset ^ 0x43A) && (bitset ^ 0x43B) && (bitset ^ 0x46B) &&
             (bitset ^ 0x52E) && (bitset ^ 0x53A) && (bitset ^ 0x578) &&
             (bitset ^ 0x62E) && (bitset ^ 0x639) && (bitset ^ 0x64A) && (bitset ^ 0x66A)
           )) return 12;

  else if (!(
             (bitset ^ 0x17E) &&
             (bitset ^ 0x264) &&
             (bitset ^ 0x626) && (bitset ^ 0x651) && (bitset ^ 0x675)
           )) return 13;

  else if (!(
             (bitset ^ 0x030) && (bitset ^ 0x032) && (bitset ^ 0x038) && (bitset ^ 0x039) && (bitset ^ 0x03F) && (bitset ^ 0x040) && (bitset ^ 0x041) && (bitset ^ 0x043) && (bitset ^ 0x047) &&
             (bitset ^ 0x049) && (bitset ^ 0x04F) && (bitset ^ 0x05B) && (bitset ^ 0x05D) &&
             (bitset ^ 0x261) && (bitset ^ 0x263) && (bitset ^ 0x265) && (bitset ^ 0x26F) && (bitset ^ 0x274) &&
             (bitset ^ 0x324) && (bitset ^ 0x32A) && (bitset ^ 0x338) && (bitset ^ 0x353) && (bitset ^ 0x366) &&
             (bitset ^ 0x473) &&
             (bitset ^ 0x051) &&
             (bitset ^ 0x630) && (bitset ^ 0x631) && (bitset ^ 0x633) && (bitset ^ 0x635) && (bitset ^ 0x636) && (bitset ^ 0x638) && (bitset ^ 0x640) && (bitset ^ 0x643) && (bitset ^ 0x649) &&
             (bitset ^ 0x64F) && (bitset ^ 0x655) && (bitset ^ 0x65B) && (bitset ^ 0x65D) && (bitset ^ 0x662) && (bitset ^ 0x663) && (bitset ^ 0x665) && (bitset ^ 0x667) && (bitset ^ 0x669) &&
             (bitset ^ 0x66C) && (bitset ^ 0x66F)
           )) return 14;

  else if (!(
             (bitset ^ 0x053) &&
             (bitset ^ 0x267) && (bitset ^ 0x271) && (bitset ^ 0x273) &&
             (bitset ^ 0x339) &&
             (bitset ^ 0x461) && (bitset ^ 0x467) && (bitset ^ 0x471) &&
             (bitset ^ 0x647) && (bitset ^ 0x661) && (bitset ^ 0x664)
           )) return 15;

  else if (!(
             (bitset ^ 0x04C) && (bitset ^ 0x062) && (bitset ^ 0x068) &&
             (bitset ^ 0x135) && (bitset ^ 0x145) && (bitset ^ 0x146) && (bitset ^ 0x14C) && (bitset ^ 0x153) && (bitset ^ 0x15C) && (bitset ^ 0x162) && (bitset ^ 0x168) &&
             (bitset ^ 0x236) && (bitset ^ 0x243) && (bitset ^ 0x245) && (bitset ^ 0x246) && (bitset ^ 0x247) && (bitset ^ 0x24C) && (bitset ^ 0x253) &&
             (bitset ^ 0x33C) && (bitset ^ 0x343) && (bitset ^ 0x34C) && (bitset ^ 0x363) && (bitset ^ 0x373) &&
             (bitset ^ 0x443) && (bitset ^ 0x445) && (bitset ^ 0x446) && (bitset ^ 0x44C) && (bitset ^ 0x450) && (bitset ^ 0x463) &&
             (bitset ^ 0x52F) && (bitset ^ 0x545) && (bitset ^ 0x546) && (bitset ^ 0x54C) && (bitset ^ 0x550) && (bitset ^ 0x55A) && (bitset ^ 0x565) && (bitset ^ 0x570) &&
             (bitset ^ 0x646) && (bitset ^ 0x650) && (bitset ^ 0x670)
           )) return 16;

  else if (!(
             (bitset ^ 0x048) && (bitset ^ 0x04B) && (bitset ^ 0x04D) && (bitset ^ 0x04E) && (bitset ^ 0x055) && (bitset ^ 0x056) && (bitset ^ 0x057) && (bitset ^ 0x058) && (bitset ^ 0x059) &&
             (bitset ^ 0x130) && (bitset ^ 0x132) && (bitset ^ 0x138) && (bitset ^ 0x139) && (bitset ^ 0x13F) && (bitset ^ 0x140) && (bitset ^ 0x141) && (bitset ^ 0x142) && (bitset ^ 0x143) &&
             (bitset ^ 0x147) && (bitset ^ 0x148) && (bitset ^ 0x14E) && (bitset ^ 0x14F) && (bitset ^ 0x150) && (bitset ^ 0x151) && (bitset ^ 0x152) && (bitset ^ 0x155) && (bitset ^ 0x156) &&
             (bitset ^ 0x157) && (bitset ^ 0x158) && (bitset ^ 0x159) &&
             (bitset ^ 0x238) && (bitset ^ 0x239) && (bitset ^ 0x241) && (bitset ^ 0x242) && (bitset ^ 0x244) && (bitset ^ 0x248) && (bitset ^ 0x24F) && (bitset ^ 0x250) && (bitset ^ 0x251) &&
             (bitset ^ 0x252) && (bitset ^ 0x255) && (bitset ^ 0x256) && (bitset ^ 0x257) && (bitset ^ 0x25E) && (bitset ^ 0x275) && (bitset ^ 0x276) && (bitset ^ 0x277) && (bitset ^ 0x279) &&
             (bitset ^ 0x344) && (bitset ^ 0x34F) && (bitset ^ 0x351) && (bitset ^ 0x355) && (bitset ^ 0x356) && (bitset ^ 0x365) && (bitset ^ 0x367) && (bitset ^ 0x36F) && (bitset ^ 0x370) &&
             (bitset ^ 0x371) && (bitset ^ 0x375) && (bitset ^ 0x376) && (bitset ^ 0x377) &&
             (bitset ^ 0x436) && (bitset ^ 0x438) && (bitset ^ 0x441) && (bitset ^ 0x442) && (bitset ^ 0x444) && (bitset ^ 0x447) && (bitset ^ 0x448) && (bitset ^ 0x44D) && (bitset ^ 0x44F) &&
             (bitset ^ 0x455) && (bitset ^ 0x456) && (bitset ^ 0x462) && (bitset ^ 0x464) && (bitset ^ 0x468) && (bitset ^ 0x46E) && (bitset ^ 0x46F) && (bitset ^ 0x475) && (bitset ^ 0x476) &&
             (bitset ^ 0x530) && (bitset ^ 0x533) && (bitset ^ 0x535) && (bitset ^ 0x536) && (bitset ^ 0x538) && (bitset ^ 0x541) && (bitset ^ 0x542) && (bitset ^ 0x543) && (bitset ^ 0x547) &&
             (bitset ^ 0x548) && (bitset ^ 0x54D) && (bitset ^ 0x54E) && (bitset ^ 0x54F) && (bitset ^ 0x555) && (bitset ^ 0x561) && (bitset ^ 0x562) && (bitset ^ 0x563) && (bitset ^ 0x564) &&
             (bitset ^ 0x568) && (bitset ^ 0x56E) && (bitset ^ 0x56F) && (bitset ^ 0x558) &&
             (bitset ^ 0x641) && (bitset ^ 0x648) && (bitset ^ 0x64B) && (bitset ^ 0x64D) && (bitset ^ 0x64E) && (bitset ^ 0x652) && (bitset ^ 0x657) && (bitset ^ 0x658) && (bitset ^ 0x668) &&
             (bitset ^ 0x66E)
           )) return 17;

  else if (!(
             (bitset ^ 0x126) &&
             (bitset ^ 0x144) && (bitset ^ 0x14B) &&
             (bitset ^ 0x27E) &&
             (bitset ^ 0x334) &&
             (bitset ^ 0x526) && (bitset ^ 0x544) && (bitset ^ 0x54A) && (bitset ^ 0x54B) && (bitset ^ 0x551) && (bitset ^ 0x552) && (bitset ^ 0x56A)
           )) return 18;


  else if (!(
             (bitset ^ 0x230) &&
             (bitset ^ 0x364) &&
             (bitset ^ 0x44E) &&
             (bitset ^ 0x525) && (bitset ^ 0x575) &&
             (bitset ^ 0x678)
           )) return 19;

  else if (!(
             (bitset ^ 0x224) && (bitset ^ 0x226) && (bitset ^ 0x24B) &&
             (bitset ^ 0x44B) && (bitset ^ 0x452)
           )) return 20;

  else if (!(
             (bitset ^ 0x22A) && (bitset ^ 0x24D) &&
             (bitset ^ 0x330) && (bitset ^ 0x34D) && (bitset ^ 0x34E) && (bitset ^ 0x357) && (bitset ^ 0x36D) &&
             (bitset ^ 0x426) && (bitset ^ 0x42A) && (bitset ^ 0x440) && (bitset ^ 0x451) && (bitset ^ 0x457) && (bitset ^ 0x46D) && (bitset ^ 0x477) &&
             (bitset ^ 0x540) && (bitset ^ 0x56D) && (bitset ^ 0x577) &&
             (bitset ^ 0x66D)
           )) return 21;

  else if (!(
             (bitset ^ 0x262) && (bitset ^ 0x268) && (bitset ^ 0x26E)
           )) return 22;

  else if (!(
             (bitset ^ 0x347)
           )) return 23;

  else if (!(
             (bitset ^ 0x025) && (bitset ^ 0x07D) &&
             (bitset ^ 0x34B) &&
             (bitset ^ 0x679) && (bitset ^ 0x67D)
           )) return 24;

  else if (!(
             (bitset ^ 0x125) &&
             (bitset ^ 0x24E) && (bitset ^ 0x278) &&
             (bitset ^ 0x362) && (bitset ^ 0x368) && (bitset ^ 0x36E) &&
             (bitset ^ 0x430)
           )) return 25;

  else if (!(
             (bitset ^ 0x26D)
           )) return 26;

  else if (!(
             (bitset ^ 0x14D) &&
             (bitset ^ 0x557)
           )) return 27;

  else if (!(
             (bitset ^ 0x044) &&
             (bitset ^ 0x644)
           )) return 28;

  else if (!(
             (bitset ^ 0x042) && (bitset ^ 0x050) && (bitset ^ 0x052) &&
             (bitset ^ 0x124) &&
             (bitset ^ 0x235) && (bitset ^ 0x270) &&
             (bitset ^ 0x336) && (bitset ^ 0x342) && (bitset ^ 0x345) && (bitset ^ 0x346) && (bitset ^ 0x350) && (bitset ^ 0x352) &&
             (bitset ^ 0x470) &&
             (bitset ^ 0x524) &&
             (bitset ^ 0x642) && (bitset ^ 0x653) && (bitset ^ 0x673)
           )) return 30;

  else if (!(
             (bitset ^ 0x033) && (bitset ^ 0x035) && (bitset ^ 0x037) && (bitset ^ 0x045) && (bitset ^ 0x046) && (bitset ^ 0x054) && (bitset ^ 0x05A) &&
             (bitset ^ 0x223) && (bitset ^ 0x23D) && (bitset ^ 0x27A) &&
             (bitset ^ 0x32B) && (bitset ^ 0x32D) && (bitset ^ 0x341) && (bitset ^ 0x348) &&
             (bitset ^ 0x423) && (bitset ^ 0x434) && (bitset ^ 0x43D) && (bitset ^ 0x465) &&
             (bitset ^ 0x632) && (bitset ^ 0x645) && (bitset ^ 0x64C) && (bitset ^ 0x65A) && (bitset ^ 0x65F) && (bitset ^ 0x67A)
           )) return 31;

  return (!(
            (bitset ^ 0x064) &&
            (bitset ^ 0x12F) && (bitset ^ 0x137) && (bitset ^ 0x15A) && (bitset ^ 0x164) &&
            (bitset ^ 0x232) && (bitset ^ 0x23F) && (bitset ^ 0x240) &&
            (bitset ^ 0x335) && (bitset ^ 0x33E) && (bitset ^ 0x361) &&
            (bitset ^ 0x433) && (bitset ^ 0x435) && (bitset ^ 0x439) && (bitset ^ 0x453) &&
            (bitset ^ 0x553) && (bitset ^ 0x55C) && (bitset ^ 0x567) && (bitset ^ 0x571) && (bitset ^ 0x573) &&
            (bitset ^ 0x671)
          ));
}
