int __fastcall sub_11911C(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  int v7; // r11
  unsigned int v10; // r4
  unsigned int v11; // r3
  unsigned int v12; // r4
  unsigned int v13; // r3
  int v14; // r4
  int v15; // r0
  int v16; // r0
  char v18; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE var1004[4128]; // [sp+820h] [bp-1004h] BYREF

  v7 = 0;
  v18 = 0;
  pthread_mutex_lock(&power_mutex);
  do
  {
    LOBYTE(v10) = 0;
    v11 = 0;
    do
    {
      v10 = (unsigned __int8)(v10 + 1);
      iic_write_reg(a1, &v18, 1, &a2[v11], 1u);
      v11 = v10;
    }
    while ( v10 < a3 );
    LOBYTE(v12) = 0;
    usleep((__useconds_t)"20$core..fmt..UpperExp$u20$for$u20$i32$GT$3fmt17h8434dc95ce0e7ecdE");
    v13 = 0;
    do
    {
      v12 = (unsigned __int8)(v12 + 1);
      iic_read_reg(a1, &v18, 1, (int)&a4[v13], 1);
      v13 = v12;
    }
    while ( v12 < a5 );
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v14 = sub_118D50(a2, a4, a5);
    if ( !v14 )
      break;
    v15 = snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d", a2[3], v7++);
    V_LOCK(v15);
    v16 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "exec_power_cmd",
      14,
      246,
      20,
      var1004);
  }
  while ( v7 != 3 );
  pthread_mutex_unlock(&power_mutex);
  return v14;
}
