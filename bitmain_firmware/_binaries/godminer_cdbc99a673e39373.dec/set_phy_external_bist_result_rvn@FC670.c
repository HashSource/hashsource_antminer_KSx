int set_phy_external_bist_result_rvn()
{
  char v1[132]; // [sp+0h] [bp-84h] BYREF

  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist err cnt> %lld", *(_QWORD *)&dword_2E9A58);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist lost cnt> %lld", *(_QWORD *)&dword_2E9A60);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost lane num> %d", dword_2E9A50);
  memset(v1, 0, 0x80u);
  return sprintf(v1, "<phy err lane num> %d", dword_2E9A54);
}
