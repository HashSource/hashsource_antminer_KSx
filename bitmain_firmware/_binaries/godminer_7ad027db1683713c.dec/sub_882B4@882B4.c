_DWORD *__fastcall sub_882B4(char *s2)
{
  _DWORD *result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( dword_2D2540[0] > 0x13u )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "only support %d reject reasons", dword_2D2540[0]);
    V_UNLOCK();
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-new/pool.c",
                       150,
                       "reject_reason_history_update",
                       28,
                       41,
                       20,
                       v3);
  }
  else
  {
    if ( !dword_2D2540[0] )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "reject reason init %d", dword_2D2540[0]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "reject_reason_history_update",
        28,
        46,
        40,
        v3);
      *(_QWORD *)reject_reason_map = 0;
      unk_2E9F38 = 0;
      dbl_2E9F3C = 0.0;
    }
    result = (_DWORD *)map_get_(reject_reason_map, s2);
    LODWORD(dbl_2E9F3C) = result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      *(_QWORD *)&dbl_2E9F3C = 0x100000000LL;
      ++dword_2D2540[0];
      return (_DWORD *)map_set_(reject_reason_map, s2, (size_t)&dbl_2E9F3C + 4, 4u);
    }
  }
  return result;
}
