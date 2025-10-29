int __fastcall sub_119144(unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  int v8; // r10
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned __int8 *v11; // r4
  int v12; // r11
  int v13; // r0
  int v14; // r0
  int v16; // [sp+0h] [bp-1814h]
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v18[4100]; // [sp+810h] [bp-1004h] BYREF

  pthread_mutex_lock(&power_mutex);
  if ( !byte_306D90 )
  {
    i2c_sim_send_cmd(16, 0, 1, 17, 4);
    byte_306D90 = 1;
  }
  v8 = 0;
  do
  {
    LOBYTE(v9) = 0;
    v10 = 0;
    do
    {
      v9 = (unsigned __int8)(v9 + 1);
      i2c_sim_send_cmd(16, 0, 1, 17, a1[v10]);
      v10 = v9;
    }
    while ( v9 < a2 );
    usleep((__useconds_t)"archer15prefilter_state17ha8a356c4ac1bebf2E");
    v11 = a3;
    do
      *v11++ = i2c_sim_send_cmd(16, 1, 0, 17, 0);
    while ( (unsigned __int8)((_BYTE)v11 - (_BYTE)a3) < a4 );
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v12 = sub_118F18(a1, a3, a4);
    if ( !v12 )
      break;
    v16 = v8++;
    v13 = snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a1[3], v16);
    V_LOCK(v13);
    v14 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "exec_i2c_sim_cmd",
      16,
      185,
      20,
      v18);
  }
  while ( v8 != 3 );
  pthread_mutex_unlock(&power_mutex);
  return v12;
}
