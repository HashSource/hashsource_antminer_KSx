int __fastcall sub_10BDBC(unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  int v8; // r10
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned __int8 *v11; // r4
  int v12; // r11
  int v14; // [sp+0h] [bp-1814h]
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v16[4100]; // [sp+810h] [bp-1004h] BYREF

  pthread_mutex_lock(&power_mutex);
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
    usleep((__useconds_t)"");
    v11 = a3;
    do
      *v11++ = i2c_sim_send_cmd(16, 1, 0, 17, 0);
    while ( (unsigned __int8)((_BYTE)v11 - (_BYTE)a3) < a4 );
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v12 = sub_10BB90(a1, a3, a4);
    if ( !v12 )
      break;
    v14 = v8++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d", a1[3], v14);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "exec_i2c_sim_cmd",
      16,
      170,
      20,
      v16);
  }
  while ( v8 != 3 );
  pthread_mutex_unlock(&power_mutex);
  return v12;
}
