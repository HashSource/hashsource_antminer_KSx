int __fastcall <adler::algo::U32X4 as core::ops::arith::RemAssign<u32>>::rem_assign(_DWORD *a1, int a2)
{
  int v3; // r6
  int v4; // r7
  int v5; // r8
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int result; // r0
  int v11; // r1

  if ( !a2 )
    core::panicking::panic(
      (int)"attempt to calculate the remainder with a divisor of zero/cargo/registry/src/github.com-1ecc6299db9ec823/adle"
           "r-1.0.2/src/algo.rsAdler32ab_URC_FAILURE_URC_CONTINUE_UNWIND_URC_INSTALL_CONTEXT_URC_HANDLER_FOUND_URC_END_OF"
           "_STACK_URC_NORMAL_STOP_URC_FATAL_PHASE1_ERROR_URC_FATAL_PHASE2_ERROR_URC_FOREIGN_EXCEPTION_CAUGHT_URC_NO_REASON",
      57,
      (int)&off_2CF6B4);
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  sub_25BABC(*a1, a2);
  *a1 = v7;
  sub_25BABC(v3, a2);
  a1[1] = v8;
  sub_25BABC(v4, a2);
  a1[2] = v9;
  result = sub_25BABC(v5, a2);
  a1[3] = v11;
  return result;
}
