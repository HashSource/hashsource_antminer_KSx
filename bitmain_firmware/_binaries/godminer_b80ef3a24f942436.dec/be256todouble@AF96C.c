double __fastcall be256todouble(unsigned __int64 *a1)
{
  sub_2706F8(bswap32(*((_DWORD *)a1 + 1)), bswap32(*(_DWORD *)a1));
  sub_2706F8(bswap32(*((_DWORD *)a1 + 3)), bswap32(*((_DWORD *)a1 + 2)));
  sub_2706F8(bswap32(*((_DWORD *)a1 + 5)), bswap32(*((_DWORD *)a1 + 4)));
  return sub_2706F8(bswap32(*((_DWORD *)a1 + 7)), bswap32(*((_DWORD *)a1 + 6)));
}
