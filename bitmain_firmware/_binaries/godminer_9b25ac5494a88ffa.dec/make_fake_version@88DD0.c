int make_fake_version()
{
  char v1[64]; // [sp+0h] [bp-40h] BYREF

  sprintf(v1, "%s %s", "Mar 12 2024", "21:22:26");
  strcpy(g_miner_compiletime, v1);
  strcpy(g_miner_type, "Antminer unknow");
  return *(_DWORD *)"Antminer unknow";
}
