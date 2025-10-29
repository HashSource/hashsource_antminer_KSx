_DWORD *__fastcall sub_8A0D8(char *s2)
{
  _DWORD *result; // r0
  int v3; // r0
  int v4; // r0
  _BYTE v5[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( (unsigned int)dword_2F2D18 > 0x13 )
  {
    V_LOCK(s2);
    v4 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v4);
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/"
                       "tmp/release/build/godminer-origin_godminer-new/pool.c",
                       150,
                       "reject_reason_history_update",
                       28,
                       45,
                       20,
                       v5);
  }
  else
  {
    if ( !dword_2F2D18 )
    {
      V_LOCK(s2);
      v3 = logfmt_raw((int)v5, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "reject_reason_history_update",
        28,
        50,
        40,
        v5);
      *(_QWORD *)reject_reason_map = 0;
      unk_312D18 = 0;
      dbl_312D1C = 0.0;
    }
    result = (_DWORD *)map_get_(reject_reason_map, s2);
    LODWORD(dbl_312D1C) = result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      *(_QWORD *)&dbl_312D1C = 0x100000000LL;
      ++dword_2F2D18;
      return (_DWORD *)map_set_(reject_reason_map, s2, (size_t)&dbl_312D1C + 4, 4u);
    }
  }
  return result;
}
