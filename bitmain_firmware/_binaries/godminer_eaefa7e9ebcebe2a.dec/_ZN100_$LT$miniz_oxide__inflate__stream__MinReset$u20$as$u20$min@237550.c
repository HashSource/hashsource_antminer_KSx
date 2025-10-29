int __fastcall <miniz_oxide::inflate::stream::MinReset as miniz_oxide::inflate::stream::ResetPolicy>::reset(
        int a1,
        int a2)
{
  int v2; // r1

  *(_BYTE *)(a2 + 43749) = 0;
  v2 = a2 + 43749;
  *(_WORD *)(v2 + 13) = 1;
  *(_DWORD *)(v2 + 3) = 0;
  *(_DWORD *)(v2 + 7) = 0;
  *(_BYTE *)(v2 + 11) = 1;
  return 1;
}
