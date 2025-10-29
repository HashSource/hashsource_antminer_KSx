int set_phy_external_bist_result_rvn()
{
  char v1[132]; // [sp+0h] [bp-84h] BYREF

  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist err cnt> %ld", dword_306B20);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist lost cnt> %ld", LODWORD(dbl_306B28));
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost lane num> %d", dword_306B18);
  memset(v1, 0, 0x80u);
  return sprintf(v1, "<phy err lane num> %d", dword_306B1C);
}
