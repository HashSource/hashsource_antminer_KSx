unsigned int __fastcall object::common::SectionKind::is_bss(unsigned int a1)
{
  return (a1 < 9) & (0x160u >> a1);
}
