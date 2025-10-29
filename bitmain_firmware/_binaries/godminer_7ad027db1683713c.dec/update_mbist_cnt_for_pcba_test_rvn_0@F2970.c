int __fastcall update_mbist_cnt_for_pcba_test_rvn_0(int a1, _DWORD *a2)
{
  int v3; // r1
  __int64 v4; // r2
  int v5; // r1
  __int64 v6; // r2

  v3 = HIDWORD(qword_2E8534);
  v4 = qword_2E853C;
  *a2 = qword_2E8534;
  a2[1] = v3;
  *((_QWORD *)a2 + 1) = v4;
  v5 = HIDWORD(qword_2E8544);
  v6 = qword_2E854C;
  a2[4] = qword_2E8544;
  a2[5] = v5;
  *((_QWORD *)a2 + 3) = v6;
  return 0;
}
