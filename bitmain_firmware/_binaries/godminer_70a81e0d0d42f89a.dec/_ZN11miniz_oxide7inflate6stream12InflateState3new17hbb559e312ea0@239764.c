int __fastcall miniz_oxide::inflate::stream::InflateState::new(int a1, char a2)
{
  _BYTE v5[43284]; // [sp+0h] [bp-A918h] BYREF

  memset((void *)(a1 + 43292), 0, 0x1C9u);
  memset(v5, 0, sizeof(v5));
  memcpy((void *)(a1 + 0x8000), &v5[0x8000], 0x2914u);
  *(_DWORD *)(a1 + 43284) = 0;
  *(_DWORD *)(a1 + 43288) = 0;
  *(_BYTE *)(a1 + 43749) = 0;
  memset((void *)a1, 0, 0x8000u);
  *(_WORD *)(a1 + 43762) = 1;
  *(_DWORD *)(a1 + 43752) = 0;
  *(_DWORD *)(a1 + 43756) = 0;
  *(_BYTE *)(a1 + 43761) = a2;
  *(_BYTE *)(a1 + 43760) = 1;
  return 43762;
}
