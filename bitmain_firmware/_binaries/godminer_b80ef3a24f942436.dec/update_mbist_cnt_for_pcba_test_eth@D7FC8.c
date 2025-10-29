int __fastcall update_mbist_cnt_for_pcba_test_eth(int a1, _DWORD *a2)
{
  int v3; // r1
  __int64 v4; // r2
  int v5; // r1
  __int64 v6; // r2

  v3 = HIDWORD(qword_301108);
  v4 = qword_301110;
  *a2 = qword_301108;
  a2[1] = v3;
  *((_QWORD *)a2 + 1) = v4;
  v5 = HIDWORD(qword_301118);
  v6 = qword_301120;
  a2[4] = qword_301118;
  a2[5] = v5;
  *((_QWORD *)a2 + 3) = v6;
  return 0;
}
