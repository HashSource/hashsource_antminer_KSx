void __fastcall <std::path::Component as core::fmt::Debug>::fmt(int a1)
{
  _R1 = *(char *)(a1 + 8);
  _R3 = 5;
  __asm { UQSUB8          R1, R1, R3 }
  __asm { ADD             PC, R3, R1 }
}
