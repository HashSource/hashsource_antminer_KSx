int __fastcall update_mbist_cnt_for_pcba_test_eth(int a1, int a2)
{
  int v3; // r1
  __int64 v4; // r2
  int v5; // r1
  __int64 v6; // r2

  v3 = HIDWORD(qword_2FCC80);
  v4 = qword_2FCC88;
  *(_DWORD *)a2 = qword_2FCC80;
  *(_DWORD *)(a2 + 4) = v3;
  *(_QWORD *)(a2 + 8) = v4;
  v5 = HIDWORD(qword_2FCC90);
  v6 = qword_2FCC98;
  *(_DWORD *)(a2 + 16) = qword_2FCC90;
  *(_DWORD *)(a2 + 20) = v5;
  *(_QWORD *)(a2 + 24) = v6;
  return 0;
}
