int set_phy_external_bist_result_rvn()
{
  char v1[132]; // [sp+0h] [bp-84h] BYREF

  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist err cnt> %ld", dword_30CE78);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist lost cnt> %ld", LODWORD(dbl_30CE80));
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost lane num> %d", dword_30CE70);
  memset(v1, 0, 0x80u);
  return sprintf(v1, "<phy err lane num> %d", dword_30CE74);
}
