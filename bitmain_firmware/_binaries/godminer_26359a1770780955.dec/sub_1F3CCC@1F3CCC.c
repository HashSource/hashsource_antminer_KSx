__int64 __fastcall sub_1F3CCC(clockid_t a1)
{
  __int64 clock_id; // [sp+8h] [bp-18h] BYREF
  unsigned int v3; // [sp+10h] [bp-10h]
  struct timespec tp; // [sp+18h] [bp-8h] BYREF

  if ( &__clock_gettime64 )
  {
    if ( _clock_gettime64(a1, &clock_id) == -1 )
    {
      tp.tv_nsec = *_errno_location();
      tp.tv_sec = 0;
      core::result::unwrap_failed((int)&unk_2A432A, 43, (int)&tp, (int)&off_2DE308, (int)&off_2DFC10);
    }
    if ( v3 <= 0x3B9AC9FF )
      return clock_id;
LABEL_9:
    core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2DFBF0);
  }
  if ( clock_gettime(a1, &tp) == -1 )
  {
    HIDWORD(clock_id) = *_errno_location();
    LODWORD(clock_id) = 0;
    core::result::unwrap_failed((int)&unk_2A432A, 43, (int)&clock_id, (int)&off_2DE308, (int)&off_2DFC00);
  }
  if ( tp.tv_nsec > 0x3B9AC9FFu )
    goto LABEL_9;
  return tp.tv_sec;
}
