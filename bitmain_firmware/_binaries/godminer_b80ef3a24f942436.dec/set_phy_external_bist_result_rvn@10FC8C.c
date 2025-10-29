int set_phy_external_bist_result_rvn()
{
  char v1[132]; // [sp+0h] [bp-84h] BYREF

  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist err cnt> %ld", dword_311340);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist lost cnt> %ld", dword_311348);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost lane num> %d", dword_311338);
  memset(v1, 0, 0x80u);
  return sprintf(v1, "<phy err lane num> %d", dword_31133C);
}
