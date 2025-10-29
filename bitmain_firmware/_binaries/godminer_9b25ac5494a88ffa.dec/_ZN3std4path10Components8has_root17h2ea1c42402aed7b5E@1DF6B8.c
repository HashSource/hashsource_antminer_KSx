bool __fastcall std::path::Components::has_root(int a1)
{
  return *(_BYTE *)(a1 + 30) != 0 || *(unsigned __int8 *)(a1 + 8) < 5u;
}
