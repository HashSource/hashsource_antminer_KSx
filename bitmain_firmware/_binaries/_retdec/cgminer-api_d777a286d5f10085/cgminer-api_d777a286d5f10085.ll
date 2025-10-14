source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%hostent = type { i8*, i8**, i32, i32, i8** }
%sockaddr = type { i32, [14 x i8] }

@global_var_2200c = local_unnamed_addr global i32 67828
@global_var_22010 = local_unnamed_addr global i32 67828
@global_var_22014 = local_unnamed_addr global i32 67828
@global_var_22018 = local_unnamed_addr global i32 67828
@global_var_2201c = local_unnamed_addr global i32 67828
@global_var_22020 = local_unnamed_addr global i32 67828
@global_var_22024 = local_unnamed_addr global i32 67828
@global_var_22028 = local_unnamed_addr global i32 67828
@global_var_2202c = local_unnamed_addr global i32 67828
@global_var_22030 = local_unnamed_addr global i32 67828
@global_var_22034 = local_unnamed_addr global i32 67828
@global_var_22038 = local_unnamed_addr global i32 67828
@global_var_2203c = local_unnamed_addr global i32 67828
@global_var_22040 = local_unnamed_addr global i32 67828
@global_var_22044 = local_unnamed_addr global i32 67828
@global_var_22048 = local_unnamed_addr global i32 67828
@global_var_2204c = local_unnamed_addr global i32 67828
@global_var_22050 = local_unnamed_addr global i32 67828
@global_var_22054 = local_unnamed_addr global i32 67828
@global_var_22058 = local_unnamed_addr global i32 67828
@global_var_2205c = local_unnamed_addr global i32 67828
@global_var_22060 = local_unnamed_addr global i32 67828
@global_var_22064 = local_unnamed_addr global i32 67828
@global_var_22068 = local_unnamed_addr global i32 67828
@global_var_11434 = constant [7 x i8] c"--help\00"
@global_var_11420 = constant [8 x i8] c"summary\00"
@global_var_11428 = constant [10 x i8] c"127.0.0.1\00"
@global_var_22080 = local_unnamed_addr global i32 0
@global_var_1143c = constant [38 x i8] c"usAge: %s [command [ip/host [port]]]\0A\00"
@global_var_10c08 = local_unnamed_addr constant i32 70660
@global_var_11404 = constant [25 x i8] c" server close the socket\00"
@global_var_10c0c = local_unnamed_addr constant i32 108
@global_var_10bfc = constant i32 -481165312
@global_var_11268 = constant [13 x i8] c"[%s%s] =>\0A(\0A\00"
@global_var_11288 = constant [15 x i8] c"   [%d] => %s\0A\00"
@global_var_11278 = constant [15 x i8] c"   [%s] => %s\0A\00"
@global_var_11260 = local_unnamed_addr constant i32 1
@global_var_11264 = local_unnamed_addr constant i32 60
@global_var_1129c = constant [29 x i8] c"Couldn't get hostname: '%s'\0A\00"
@global_var_112bc = constant [34 x i8] c"Socket initialisation failed: %s\0A\00"
@global_var_112e0 = constant [27 x i8] c"Socket connect failed: %s\0A\00"
@global_var_1135c = constant [48 x i8] c"cgminer-api, setsocket SO_RCVTIMEO failed (%s)\0A\00"
@global_var_1132c = constant [48 x i8] c"cgminer-api, setsocket SO_SNDTIMEO failed (%s)\0A\00"
@global_var_112fc = constant [46 x i8] c"cgminer-api, setsocket SO_LINGER failed (%s)\0A\00"
@global_var_1138c = constant [29 x i8] c"cgminer api send failed: %s\0A\00"
@global_var_113c4 = constant [27 x i8] c"cgminer realloc: OOM (%d)\0A\00"
@global_var_113ac = constant [23 x i8] c"cgminer api: OOM (%d)\0A\00"
@global_var_113e0 = constant [17 x i8] c"Recv failed: %s\0A\00"
@global_var_113f4 = constant [41 x i8] c"Recv failed: api server close the socket\00"
@global_var_11248 = local_unnamed_addr constant i32 68838
@global_var_1124c = local_unnamed_addr constant i32 68828
@global_var_21f08 = global i32 68729
@0 = external global i32
@global_var_22078 = local_unnamed_addr global %_IO_FILE* null
@global_var_10be4 = local_unnamed_addr constant void ()* inttoptr (i32 68136 to void ()*)
@global_var_10be8 = local_unnamed_addr constant void ()* inttoptr (i32 70165 to void ()*)
@global_var_112b8 = external constant i8*
@1 = internal constant [2 x i8] c")\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_11298 = constant [2 x i8] c")\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_108e8:
  %0 = call i32 @function_10bec(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @function_10908(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_10908:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_10914(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10914:
  %0 = call i32 @strtol(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10920(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_10920:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_1092c(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1092c:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_10938(i32* %ptr) local_unnamed_addr {
dec_label_pc_10938:
  call void @free(i32* %ptr), !insn.addr !6
  ret void, !insn.addr !6
}

define i32* @function_10944(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10944:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i32* @function_10950(i32* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10950:
  %0 = call i32* @__rawmemchr(i32* %s, i32 %c), !insn.addr !8
  ret i32* %0, !insn.addr !8
}

define i32 @function_1095c(i8* %s) local_unnamed_addr {
dec_label_pc_1095c:
  %0 = call i32 @puts(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32* @function_10968(i32 %size) local_unnamed_addr {
dec_label_pc_10968:
  %0 = call i32* @malloc(i32 %size), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @function_10974(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10974:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i8* @function_10980(i32 %errnum) local_unnamed_addr {
dec_label_pc_10980:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define void @function_1098c() local_unnamed_addr {
dec_label_pc_1098c:
  call void @__gmon_start__(), !insn.addr !13
  ret void, !insn.addr !13
}

define i16** @function_10998() local_unnamed_addr {
dec_label_pc_10998:
  %0 = call i16** @__ctype_b_loc(), !insn.addr !14
  ret i16** %0, !insn.addr !14
}

define i32 @function_109a4(i8* %s) local_unnamed_addr {
dec_label_pc_109a4:
  %0 = call i32 @strlen(i8* %s), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i8* @function_109b0(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_109b0:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !16
  ret i8* %0, !insn.addr !16
}

define i32 @function_109bc(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_109bc:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32* @function_109c8() local_unnamed_addr {
dec_label_pc_109c8:
  %0 = call i32* @__errno_location(), !insn.addr !18
  ret i32* %0, !insn.addr !18
}

define i32 @function_109d4(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_109d4:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define %hostent* @function_109e0(i8* %name) local_unnamed_addr {
dec_label_pc_109e0:
  %0 = call %hostent* @gethostbyname(i8* %name), !insn.addr !20
  ret %hostent* %0, !insn.addr !20
}

define void @function_109ec() local_unnamed_addr {
dec_label_pc_109ec:
  call void @abort(), !insn.addr !21
  ret void, !insn.addr !21
}

define i32 @function_109f8(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_109f8:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_10a04(i32 %fd) local_unnamed_addr {
dec_label_pc_10a04:
  %0 = call i32 @close(i32 %fd), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_10a10(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_10a10:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_10a1c(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10a1c:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_10a28:
  %r1.0.reg2mem = alloca i32, !insn.addr !26
  %r7.1.reg2mem = alloca i32, !insn.addr !26
  %r5.3.reg2mem = alloca i32, !insn.addr !26
  %r2.0.reg2mem = alloca i32, !insn.addr !26
  %r5.0.reg2mem = alloca i32, !insn.addr !26
  %0 = icmp slt i32 %argc, 2, !insn.addr !27
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !27
  store i32 ptrtoint ([10 x i8]* @global_var_11428 to i32), i32* %r5.3.reg2mem, !insn.addr !27
  store i32 ptrtoint ([8 x i8]* @global_var_11420 to i32), i32* %r7.1.reg2mem, !insn.addr !27
  br i1 %0, label %dec_label_pc_10b50, label %dec_label_pc_10a34, !insn.addr !27

dec_label_pc_10a34:                               ; preds = %dec_label_pc_10a28
  %1 = ptrtoint i8** %argv to i32
  %2 = add i32 %1, 4, !insn.addr !28
  %3 = inttoptr i32 %2 to i32*, !insn.addr !28
  %4 = load i32, i32* %3, align 4, !insn.addr !28
  %5 = inttoptr i32 %4 to i8*, !insn.addr !29
  %6 = load i8, i8* %5, align 1, !insn.addr !29
  %7 = icmp eq i8 %6, 45, !insn.addr !30
  br i1 %7, label %dec_label_pc_10adc, label %dec_label_pc_10a4c, !insn.addr !31

dec_label_pc_10a4c:                               ; preds = %dec_label_pc_10b68, %dec_label_pc_10a34
  %8 = call i32 @strcmp(i8* %5, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_11434, i32 0, i32 0)), !insn.addr !32
  %9 = icmp eq i32 %8, 0, !insn.addr !33
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !34
  store i32 ptrtoint ([7 x i8]* @global_var_11434 to i32), i32* %r1.0.reg2mem, !insn.addr !34
  br i1 %9, label %dec_label_pc_10b74, label %dec_label_pc_10a68, !insn.addr !34

dec_label_pc_10a68:                               ; preds = %dec_label_pc_10a4c, %dec_label_pc_10b0c, %dec_label_pc_10b14, %dec_label_pc_10b20
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = mul i32 %r5.0.reload, 4, !insn.addr !35
  %11 = add i32 %10, %1, !insn.addr !35
  %12 = inttoptr i32 %11 to i32*, !insn.addr !35
  %13 = load i32, i32* %12, align 4, !insn.addr !35
  %14 = add nuw nsw i32 %r5.0.reload, 1, !insn.addr !36
  %15 = call i32 @function_10c7c(i32 %13), !insn.addr !37
  %16 = inttoptr i32 %15 to i8*, !insn.addr !38
  %17 = load i8, i8* %16, align 1, !insn.addr !38
  %18 = icmp eq i8 %17, 0, !insn.addr !39
  %spec.select = select i1 %18, i32 ptrtoint ([8 x i8]* @global_var_11420 to i32), i32 %15
  %19 = icmp slt i32 %14, %argc, !insn.addr !40
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !40
  store i32 ptrtoint ([10 x i8]* @global_var_11428 to i32), i32* %r5.3.reg2mem, !insn.addr !40
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !40
  br i1 %19, label %dec_label_pc_10a94, label %dec_label_pc_10b50, !insn.addr !40

dec_label_pc_10a94:                               ; preds = %dec_label_pc_10a68
  %20 = add nuw nsw i32 %r5.0.reload, 2, !insn.addr !41
  %21 = add i32 %11, 4, !insn.addr !42
  %22 = inttoptr i32 %21 to i32*, !insn.addr !42
  %23 = load i32, i32* %22, align 4, !insn.addr !42
  %24 = call i32 @function_10c7c(i32 %23), !insn.addr !43
  %25 = inttoptr i32 %24 to i8*, !insn.addr !44
  %26 = load i8, i8* %25, align 1, !insn.addr !44
  %27 = icmp eq i8 %26, 0, !insn.addr !45
  %spec.select1 = select i1 %27, i32 ptrtoint ([10 x i8]* @global_var_11428 to i32), i32 %24
  %28 = icmp slt i32 %20, %argc, !insn.addr !46
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !46
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !46
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !46
  br i1 %28, label %dec_label_pc_10ac0, label %dec_label_pc_10b50, !insn.addr !46

dec_label_pc_10ac0:                               ; preds = %dec_label_pc_10a94
  %29 = add i32 %11, 8, !insn.addr !47
  %30 = inttoptr i32 %29 to i32*, !insn.addr !47
  %31 = load i32, i32* %30, align 4, !insn.addr !47
  %32 = call i32 @function_10c7c(i32 %31), !insn.addr !48
  %33 = inttoptr i32 %32 to i8*, !insn.addr !49
  %34 = load i8, i8* %33, align 1, !insn.addr !49
  %35 = icmp eq i8 %34, 0, !insn.addr !50
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !51
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !51
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !51
  br i1 %35, label %dec_label_pc_10b50, label %dec_label_pc_10b98, !insn.addr !51

dec_label_pc_10adc:                               ; preds = %dec_label_pc_10a34
  %36 = add i32 %4, 1, !insn.addr !52
  %37 = inttoptr i32 %36 to i8*, !insn.addr !52
  %38 = load i8, i8* %37, align 1, !insn.addr !52
  switch i8 %38, label %dec_label_pc_10af4 [
    i8 63, label %dec_label_pc_10ae8
    i8 104, label %dec_label_pc_10b68
  ]

dec_label_pc_10ae8:                               ; preds = %dec_label_pc_10adc
  %39 = add i32 %4, 2, !insn.addr !53
  %40 = inttoptr i32 %39 to i8*, !insn.addr !53
  %41 = load i8, i8* %40, align 1, !insn.addr !53
  %42 = icmp eq i8 %41, 0, !insn.addr !54
  store i32 %1, i32* %r1.0.reg2mem, !insn.addr !55
  br i1 %42, label %dec_label_pc_10b74, label %dec_label_pc_10af4, !insn.addr !55

dec_label_pc_10af4:                               ; preds = %dec_label_pc_10adc, %dec_label_pc_10ae8
  %43 = call i32 @strcmp(i8* %5, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_11434, i32 0, i32 0)), !insn.addr !56
  %44 = icmp eq i32 %43, 0, !insn.addr !57
  store i32 ptrtoint ([7 x i8]* @global_var_11434 to i32), i32* %r1.0.reg2mem, !insn.addr !58
  br i1 %44, label %dec_label_pc_10b74, label %dec_label_pc_10b0c, !insn.addr !58

dec_label_pc_10b0c:                               ; preds = %dec_label_pc_10af4
  %45 = icmp eq i8 %38, 111, !insn.addr !59
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !60
  br i1 %45, label %dec_label_pc_10b14, label %dec_label_pc_10a68, !insn.addr !60

dec_label_pc_10b14:                               ; preds = %dec_label_pc_10b0c
  %46 = add i32 %4, 2, !insn.addr !61
  %47 = inttoptr i32 %46 to i8*, !insn.addr !61
  %48 = load i8, i8* %47, align 1, !insn.addr !61
  %49 = icmp eq i8 %48, 0, !insn.addr !62
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !63
  br i1 %49, label %dec_label_pc_10b20, label %dec_label_pc_10a68, !insn.addr !63

dec_label_pc_10b20:                               ; preds = %dec_label_pc_10b14
  %50 = icmp eq i32 %argc, 2, !insn.addr !64
  store i32 1, i32* @global_var_22080, align 4, !insn.addr !65
  store i32 2, i32* %r5.0.reg2mem, !insn.addr !66
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !66
  store i32 ptrtoint ([10 x i8]* @global_var_11428 to i32), i32* %r5.3.reg2mem, !insn.addr !66
  store i32 ptrtoint ([8 x i8]* @global_var_11420 to i32), i32* %r7.1.reg2mem, !insn.addr !66
  br i1 %50, label %dec_label_pc_10b50, label %dec_label_pc_10a68, !insn.addr !66

dec_label_pc_10b50:                               ; preds = %dec_label_pc_10a68, %dec_label_pc_10a28, %dec_label_pc_10b20, %dec_label_pc_10a94, %dec_label_pc_10ac0, %dec_label_pc_10b98
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %51 = call i32 @callapi(i32 %r7.1.reload, i32 %r5.3.reload, i32 %r2.0.reload), !insn.addr !67
  ret i32 %51, !insn.addr !67

dec_label_pc_10b68:                               ; preds = %dec_label_pc_10adc
  %52 = add i32 %4, 2, !insn.addr !68
  %53 = inttoptr i32 %52 to i8*, !insn.addr !68
  %54 = load i8, i8* %53, align 1, !insn.addr !68
  %55 = icmp eq i8 %54, 0, !insn.addr !69
  store i32 %1, i32* %r1.0.reg2mem, !insn.addr !70
  br i1 %55, label %dec_label_pc_10b74, label %dec_label_pc_10a4c, !insn.addr !70

dec_label_pc_10b74:                               ; preds = %dec_label_pc_10b68, %dec_label_pc_10af4, %dec_label_pc_10ae8, %dec_label_pc_10a4c
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %56 = load %_IO_FILE*, %_IO_FILE** @global_var_22078, align 4, !insn.addr !71
  %57 = inttoptr i32 %r1.0.reload to i8*, !insn.addr !72
  %58 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %56, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_1143c, i32 0, i32 0), i8* %57), !insn.addr !72
  ret i32 1, !insn.addr !73

dec_label_pc_10b98:                               ; preds = %dec_label_pc_10ac0
  %59 = call i32 @strtol(i8* %33, i8** null, i32 10), !insn.addr !74
  %60 = call i32 @__asm_sxth(i32 %59), !insn.addr !75
  store i32 %60, i32* %r2.0.reg2mem, !insn.addr !76
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !76
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !76
  br label %dec_label_pc_10b50, !insn.addr !76

; uselistorder directives
  uselistorder i8 %38, { 1, 0 }
  uselistorder i32 %spec.select1, { 2, 1, 0 }
  uselistorder i32 %spec.select, { 3, 2, 1, 0 }
  uselistorder i32 %11, { 1, 0, 2 }
  uselistorder i32 %r5.0.reload, { 1, 0, 2 }
  uselistorder i8* %5, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32* %r5.3.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32* %r7.1.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32* %r1.0.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32 (i32)* @function_10c7c, { 2, 1, 0 }
  uselistorder i32 ptrtoint ([7 x i8]* @global_var_11434 to i32), { 1, 0 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder [7 x i8]* @global_var_11434, { 1, 0 }
  uselistorder i32 4, { 1, 0, 2 }
  uselistorder i32 ptrtoint ([8 x i8]* @global_var_11420 to i32), { 1, 2, 0 }
  uselistorder i32 ptrtoint ([10 x i8]* @global_var_11428 to i32), { 2, 3, 0, 1 }
  uselistorder i32 4028, { 2, 4, 3, 0, 1 }
  uselistorder i32 %argc, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_10b50, { 5, 2, 4, 3, 0, 1 }
  uselistorder label %dec_label_pc_10af4, { 1, 0 }
  uselistorder label %dec_label_pc_10a68, { 3, 2, 1, 0 }
}

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bbc:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !77
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !77
  %2 = call i32 @__libc_start_main(i32 68136, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 70165 to void ()*), void ()* inttoptr (i32 68136 to void ()*), void ()* %1), !insn.addr !77
  call void @abort(), !insn.addr !78
  unreachable, !insn.addr !78
}

define i32 @function_10be0(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10be0:
  ret i32 %arg1, !insn.addr !79
}

define i32 @function_10bec() local_unnamed_addr {
dec_label_pc_10bec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10bfc to i32), i32 ptrtoint ([25 x i8]* @global_var_11404 to i32)), i32 108) to i32*), align 4, !insn.addr !80
  %3 = icmp eq i32 %2, 0, !insn.addr !81
  br i1 %3, label %4, label %dec_label_pc_10c04, !insn.addr !82

; <label>:4:                                      ; preds = %dec_label_pc_10bec
  ret i32 %1, !insn.addr !82

dec_label_pc_10c04:                               ; preds = %dec_label_pc_10bec
  call void @__gmon_start__(), !insn.addr !83
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !83
}

define i32 @function_10c10(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10c10:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.23.reg2mem = alloca i1, !insn.addr !84
  %spec.select4.reg2mem = alloca i32, !insn.addr !84
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_10c2c, !insn.addr !84

; <label>:9:                                      ; preds = %28, %25, %dec_label_pc_10c10
  ret i32 %arg1, !insn.addr !84

dec_label_pc_10c2c:                               ; preds = %dec_label_pc_10c10
  %10 = icmp eq i1 %5, %3, !insn.addr !85
  br i1 %10, label %dec_label_pc_10c40, label %11, !insn.addr !85

; <label>:11:                                     ; preds = %dec_label_pc_10c2c
  call void @__asm_svclt(i32 18288), !insn.addr !85
  br label %dec_label_pc_10c40, !insn.addr !85

dec_label_pc_10c40:                               ; preds = %11, %dec_label_pc_10c2c
  %12 = mul i32 %6, 1048577, !insn.addr !86
  br i1 %3, label %.thread, label %13, !insn.addr !87

.thread:                                          ; preds = %dec_label_pc_10c40
  %spec.select2 = select i1 %5, i32 %12, i32 0
  store i32 %spec.select2, i32* %spec.select4.reg2mem
  br label %dec_label_pc_10c58

; <label>:13:                                     ; preds = %dec_label_pc_10c40
  %14 = mul i32 %6, 4194304, !insn.addr !87
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %12, %16, !insn.addr !87
  %18 = icmp slt i32 %17, 0, !insn.addr !87
  %19 = icmp eq i32 %17, 0, !insn.addr !87
  %20 = icmp slt i32 %17, 1
  %spec.select = select i1 %20, i32 0, i32 %12
  store i32 %spec.select, i32* %spec.select4.reg2mem, !insn.addr !88
  store i1 %18, i1* %cpsr_n.23.reg2mem, !insn.addr !88
  br i1 %19, label %21, label %dec_label_pc_10c58, !insn.addr !88

; <label>:21:                                     ; preds = %13
  %22 = call i32 @unknown_240(), !insn.addr !88
  ret i32 %22, !insn.addr !88

dec_label_pc_10c58:                               ; preds = %.thread, %13
  %cpsr_n.23.reload = load i1, i1* %cpsr_n.23.reg2mem
  %spec.select4.reload = load i32, i32* %spec.select4.reg2mem
  %23 = icmp eq i1 %cpsr_n.23.reload, %3, !insn.addr !89
  br i1 %23, label %25, label %24, !insn.addr !89

; <label>:24:                                     ; preds = %dec_label_pc_10c58
  call void @__asm_svclt(i32 18288), !insn.addr !89
  br label %25, !insn.addr !89

; <label>:25:                                     ; preds = %dec_label_pc_10c58, %24
  %26 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !90
  %27 = call fp128 @__asm_vmvn.i32(i32 786432), !insn.addr !91
  br i1 %3, label %9, label %28, !insn.addr !92

; <label>:28:                                     ; preds = %25
  %29 = inttoptr i32 %arg4 to i32*, !insn.addr !92
  store i32 %spec.select4.reload, i32* %29, align 4, !insn.addr !92
  %30 = add i32 %arg4, -4, !insn.addr !92
  %31 = inttoptr i32 %30 to i32*, !insn.addr !92
  br label %9, !insn.addr !92

; uselistorder directives
  uselistorder i32 %12, { 1, 2, 0 }
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %5, { 1, 0 }
  uselistorder i1 %3, { 1, 2, 3, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %25, { 1, 0 }
  uselistorder label %dec_label_pc_10c58, { 1, 0 }
}

define i32 @function_10c6c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10c6c:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !93
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg4, 0, !insn.addr !93
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !93
  br i1 %2, label %dec_label_pc_10c6e, label %dec_label_pc_10c76, !insn.addr !93

dec_label_pc_10c6e:                               ; preds = %dec_label_pc_10c6c
  %3 = call i32 @function_10c10(i32 %arg1, i32 %arg2, i32 %arg3, i32 0), !insn.addr !94
  %4 = inttoptr i32 %1 to i8*, !insn.addr !95
  store i8 1, i8* %4, align 1, !insn.addr !95
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !95
  br label %dec_label_pc_10c76, !insn.addr !95

dec_label_pc_10c76:                               ; preds = %dec_label_pc_10c6c, %dec_label_pc_10c6e
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !96

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10c76, { 1, 0 }
}

define i32 @function_10c78() local_unnamed_addr {
dec_label_pc_10c78:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !97
}

define i32 @function_10c7c(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c7c:
  %r0.11.reg2mem = alloca i32, !insn.addr !98
  %r0.0.reg2mem = alloca i32, !insn.addr !98
  %0 = call i16** @__ctype_b_loc(), !insn.addr !99
  %1 = load i16*, i16** %0, align 4, !insn.addr !100
  %2 = ptrtoint i16* %1 to i32, !insn.addr !100
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !101
  br label %dec_label_pc_10c94, !insn.addr !101

dec_label_pc_10c94:                               ; preds = %dec_label_pc_10c94, %dec_label_pc_10c7c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %3 = add i32 %r0.0.reload, 1, !insn.addr !102
  %4 = inttoptr i32 %r0.0.reload to i8*, !insn.addr !103
  %5 = load i8, i8* %4, align 1, !insn.addr !103
  %6 = zext i8 %5 to i32, !insn.addr !103
  %7 = mul i32 %6, 2, !insn.addr !104
  %8 = add i32 %7, %2, !insn.addr !105
  %9 = inttoptr i32 %8 to i16*, !insn.addr !105
  %10 = load i16, i16* %9, align 2, !insn.addr !105
  %11 = and i16 %10, 8192
  %12 = icmp eq i16 %11, 0, !insn.addr !106
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !107
  br i1 %12, label %dec_label_pc_10cb0, label %dec_label_pc_10c94, !insn.addr !107

dec_label_pc_10cb0:                               ; preds = %dec_label_pc_10c94
  %13 = inttoptr i32 %r0.0.reload to i32*, !insn.addr !108
  %14 = call i32* @__rawmemchr(i32* %13, i32 0), !insn.addr !108
  %15 = ptrtoint i32* %14 to i32, !insn.addr !108
  %16 = icmp ult i32 %r0.0.reload, %15, !insn.addr !109
  br i1 %16, label %dec_label_pc_10cc4.lr.ph, label %dec_label_pc_10ce4, !insn.addr !110

dec_label_pc_10cc4.lr.ph:                         ; preds = %dec_label_pc_10cb0
  store i32 %15, i32* %r0.11.reg2mem
  br label %dec_label_pc_10cc4

dec_label_pc_10cc4:                               ; preds = %dec_label_pc_10cc4.lr.ph, %dec_label_pc_10cdc
  %r0.11.reload = load i32, i32* %r0.11.reg2mem
  %17 = add i32 %r0.11.reload, -1, !insn.addr !111
  %18 = inttoptr i32 %17 to i8*, !insn.addr !111
  %19 = load i8, i8* %18, align 1, !insn.addr !111
  %20 = zext i8 %19 to i32, !insn.addr !111
  %21 = load i16*, i16** %0, align 4
  %22 = ptrtoint i16* %21 to i32
  %23 = mul i32 %20, 2, !insn.addr !112
  %24 = add i32 %23, %22, !insn.addr !113
  %25 = inttoptr i32 %24 to i16*, !insn.addr !113
  %26 = load i16, i16* %25, align 2, !insn.addr !113
  %27 = and i16 %26, 8192
  %28 = icmp eq i16 %27, 0, !insn.addr !114
  br i1 %28, label %dec_label_pc_10cdc, label %29, !insn.addr !115

; <label>:29:                                     ; preds = %dec_label_pc_10cc4
  store i8 0, i8* %18, align 1, !insn.addr !115
  br label %dec_label_pc_10cdc, !insn.addr !115

dec_label_pc_10cdc:                               ; preds = %dec_label_pc_10cc4, %29
  %30 = icmp ult i32 %r0.0.reload, %17, !insn.addr !109
  store i32 %17, i32* %r0.11.reg2mem, !insn.addr !110
  br i1 %30, label %dec_label_pc_10cc4, label %dec_label_pc_10ce4, !insn.addr !110

dec_label_pc_10ce4:                               ; preds = %dec_label_pc_10cdc, %dec_label_pc_10cb0
  ret i32 %r0.0.reload, !insn.addr !116

; uselistorder directives
  uselistorder i32 %r0.0.reload, { 5, 4, 2, 3, 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.11.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10cdc, { 1, 0 }
  uselistorder label %dec_label_pc_10cc4, { 1, 0 }
}

define i32 @display(i32 %arg1) local_unnamed_addr {
dec_label_pc_10cec:
  %r7.0.reg2mem = alloca i32, !insn.addr !117
  %r4.7.reg2mem = alloca i32, !insn.addr !117
  %r4.6.reg2mem = alloca i32, !insn.addr !117
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !117
  %r5.0.reg2mem = alloca i32, !insn.addr !117
  %r6.1.reg2mem = alloca i32, !insn.addr !117
  %r0.1.reg2mem = alloca i32, !insn.addr !117
  %r4.2.reg2mem = alloca i32, !insn.addr !117
  %r0.0.reg2mem = alloca i32, !insn.addr !117
  %r4.0.reg2mem = alloca i32, !insn.addr !117
  %0 = icmp eq i32 %arg1, 0, !insn.addr !118
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !119
  store i32 0, i32* %r0.1.reg2mem, !insn.addr !119
  br i1 %0, label %dec_label_pc_10d50, label %dec_label_pc_10d18, !insn.addr !119

dec_label_pc_10d18:                               ; preds = %dec_label_pc_10cec, %dec_label_pc_10d48
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %1 = inttoptr i32 %r4.0.reload to i8*, !insn.addr !120
  %2 = call i8* @strchr(i8* %1, i32 124), !insn.addr !120
  %3 = ptrtoint i8* %2 to i32, !insn.addr !120
  %4 = icmp eq i8* %2, null, !insn.addr !121
  br i1 %4, label %dec_label_pc_10d58, label %dec_label_pc_10d2c, !insn.addr !122

dec_label_pc_10d2c:                               ; preds = %dec_label_pc_10d18
  store i8 0, i8* %2, align 1, !insn.addr !123
  %5 = load i8, i8* %1, align 1, !insn.addr !124
  %6 = add i32 %3, 1, !insn.addr !125
  %7 = icmp eq i8 %5, 0, !insn.addr !126
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !127
  store i32 %6, i32* %r4.2.reg2mem, !insn.addr !127
  store i32 %6, i32* %r6.1.reg2mem, !insn.addr !127
  br i1 %7, label %dec_label_pc_10d48, label %dec_label_pc_10d64, !insn.addr !127

dec_label_pc_10d48:                               ; preds = %dec_label_pc_10d2c, %dec_label_pc_10e28
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %8 = icmp eq i32 %r4.2.reload, 0, !insn.addr !128
  store i32 %r4.2.reload, i32* %r4.0.reg2mem, !insn.addr !129
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !129
  br i1 %8, label %dec_label_pc_10d50, label %dec_label_pc_10d18, !insn.addr !129

dec_label_pc_10d50:                               ; preds = %dec_label_pc_10d48, %dec_label_pc_10d58, %dec_label_pc_10cec
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !130

dec_label_pc_10d58:                               ; preds = %dec_label_pc_10d18
  %9 = load i8, i8* %1, align 1, !insn.addr !131
  %10 = icmp eq i8 %9, 0, !insn.addr !132
  store i32 %3, i32* %r0.1.reg2mem, !insn.addr !133
  store i32 %3, i32* %r6.1.reg2mem, !insn.addr !133
  br i1 %10, label %dec_label_pc_10d50, label %dec_label_pc_10d64, !insn.addr !133

dec_label_pc_10d64:                               ; preds = %dec_label_pc_10d2c, %dec_label_pc_10d58
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  store i32 %r4.0.reload, i32* %r4.7.reg2mem, !insn.addr !134
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !134
  br label %dec_label_pc_10e08, !insn.addr !134

dec_label_pc_10d6c:                               ; preds = %dec_label_pc_10e08
  store i8 0, i8* %38, align 1, !insn.addr !135
  %11 = load i8, i8* %37, align 1, !insn.addr !136
  %12 = add i32 %39, 1, !insn.addr !137
  %13 = icmp eq i8 %11, 0, !insn.addr !138
  store i32 %12, i32* %r5.0.reg2mem, !insn.addr !139
  store i32 %12, i32* %r4.6.reg2mem, !insn.addr !139
  br i1 %13, label %dec_label_pc_10dfc, label %dec_label_pc_10d88, !insn.addr !139

dec_label_pc_10d88:                               ; preds = %dec_label_pc_10e1c, %dec_label_pc_10d6c
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %14 = call i8* @strchr(i8* nonnull %37, i32 61), !insn.addr !140
  %15 = icmp eq i8* %14, null, !insn.addr !141
  %16 = icmp eq i32 %r7.0.reload, 0
  br i1 %15, label %dec_label_pc_10e5c, label %dec_label_pc_10d9c, !insn.addr !142

dec_label_pc_10d9c:                               ; preds = %dec_label_pc_10d88
  %17 = ptrtoint i8* %14 to i32, !insn.addr !140
  %18 = add i32 %17, 1, !insn.addr !143
  store i8 0, i8* %14, align 1, !insn.addr !144
  %19 = icmp eq i32 %18, 0
  br i1 %16, label %dec_label_pc_10db0, label %dec_label_pc_10e3c, !insn.addr !145

dec_label_pc_10db0:                               ; preds = %dec_label_pc_10d9c
  br i1 %19, label %dec_label_pc_10e64, label %dec_label_pc_10db8, !insn.addr !146

dec_label_pc_10db8:                               ; preds = %dec_label_pc_10db0
  %20 = call i16** @__ctype_b_loc(), !insn.addr !147
  %21 = inttoptr i32 %18 to i8*
  %22 = load i8, i8* %21, align 1, !insn.addr !148
  %23 = zext i8 %22 to i32, !insn.addr !148
  %24 = mul i32 %23, 2, !insn.addr !149
  %25 = load i16*, i16** %20, align 4, !insn.addr !150
  %26 = ptrtoint i16* %25 to i32, !insn.addr !150
  %27 = add i32 %24, %26, !insn.addr !151
  %28 = inttoptr i32 %27 to i16*, !insn.addr !151
  %29 = load i16, i16* %28, align 2, !insn.addr !151
  %30 = and i16 %29, 2048
  %31 = icmp eq i16 %30, 0, !insn.addr !152
  %32 = select i1 %31, i8* bitcast (i8** @global_var_112b8 to i8*), i8* %21, !insn.addr !153
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11268, i32 0, i32 0), i8* nonnull %37, i8* %32), !insn.addr !153
  store i8* %21, i8** %.pre-phi.reg2mem, !insn.addr !153
  br label %dec_label_pc_10de4, !insn.addr !153

dec_label_pc_10de4:                               ; preds = %dec_label_pc_10e3c.dec_label_pc_10de4_crit_edge, %dec_label_pc_10db8
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11278, i32 0, i32 0), i8* nonnull %37, i8* %.pre-phi.reload), !insn.addr !154
  store i32 %r5.0.reload, i32* %r4.6.reg2mem, !insn.addr !155
  br label %dec_label_pc_10dfc, !insn.addr !155

dec_label_pc_10dfc:                               ; preds = %dec_label_pc_10e44, %dec_label_pc_10de4, %dec_label_pc_10d6c
  %r4.6.reload = load i32, i32* %r4.6.reg2mem
  %35 = icmp eq i32 %r4.6.reload, 0, !insn.addr !156
  %36 = add i32 %r7.0.reload, 1, !insn.addr !157
  store i32 %r4.6.reload, i32* %r4.7.reg2mem, !insn.addr !158
  store i32 %36, i32* %r7.0.reg2mem, !insn.addr !158
  br i1 %35, label %dec_label_pc_10e28, label %dec_label_pc_10e08, !insn.addr !158

dec_label_pc_10e08:                               ; preds = %dec_label_pc_10dfc, %dec_label_pc_10d64
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r4.7.reload = load i32, i32* %r4.7.reg2mem
  %37 = inttoptr i32 %r4.7.reload to i8*
  %38 = call i8* @strchr(i8* %37, i32 44), !insn.addr !159
  %39 = ptrtoint i8* %38 to i32, !insn.addr !159
  %40 = icmp eq i8* %38, null, !insn.addr !160
  br i1 %40, label %dec_label_pc_10e1c, label %dec_label_pc_10d6c, !insn.addr !161

dec_label_pc_10e1c:                               ; preds = %dec_label_pc_10e08
  %41 = load i8, i8* %37, align 1, !insn.addr !162
  %42 = icmp eq i8 %41, 0, !insn.addr !163
  store i32 %39, i32* %r5.0.reg2mem, !insn.addr !164
  br i1 %42, label %dec_label_pc_10e28, label %dec_label_pc_10d88, !insn.addr !164

dec_label_pc_10e28:                               ; preds = %dec_label_pc_10e1c, %dec_label_pc_10dfc
  %43 = call i32 @puts(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11298, i32 0, i32 0)), !insn.addr !165
  store i32 %43, i32* %r0.0.reg2mem, !insn.addr !166
  store i32 %r6.1.reload, i32* %r4.2.reg2mem, !insn.addr !166
  br label %dec_label_pc_10d48, !insn.addr !166

dec_label_pc_10e3c:                               ; preds = %dec_label_pc_10d9c
  br i1 %19, label %dec_label_pc_10e44, label %dec_label_pc_10e3c.dec_label_pc_10de4_crit_edge, !insn.addr !167

dec_label_pc_10e3c.dec_label_pc_10de4_crit_edge:  ; preds = %dec_label_pc_10e3c
  %.pre = inttoptr i32 %18 to i8*, !insn.addr !154
  store i8* %.pre, i8** %.pre-phi.reg2mem
  br label %dec_label_pc_10de4

dec_label_pc_10e44:                               ; preds = %dec_label_pc_10e5c, %dec_label_pc_10e3c, %dec_label_pc_10e64
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11288, i32 0, i32 0), i32 %r7.0.reload, i8* nonnull %37), !insn.addr !168
  store i32 %r5.0.reload, i32* %r4.6.reg2mem, !insn.addr !169
  br label %dec_label_pc_10dfc, !insn.addr !169

dec_label_pc_10e5c:                               ; preds = %dec_label_pc_10d88
  br i1 %16, label %dec_label_pc_10e64, label %dec_label_pc_10e44, !insn.addr !170

dec_label_pc_10e64:                               ; preds = %dec_label_pc_10e5c, %dec_label_pc_10db0
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11268, i32 0, i32 0), i8* nonnull %37, i8* bitcast (i8** @global_var_112b8 to i8*)), !insn.addr !171
  br label %dec_label_pc_10e44, !insn.addr !172

; uselistorder directives
  uselistorder i8* %38, { 1, 2, 0 }
  uselistorder i8* %37, { 1, 2, 6, 7, 5, 0, 3, 4 }
  uselistorder i32 %r7.0.reload, { 1, 0, 2 }
  uselistorder i1 %16, { 1, 0 }
  uselistorder i8* %14, { 0, 2, 1 }
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32 %r4.2.reload, { 1, 0 }
  uselistorder i8* %1, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.1.reg2mem, { 2, 0, 1, 3 }
  uselistorder i32* %r6.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i8** %.pre-phi.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.6.reg2mem, { 3, 0, 2, 1 }
  uselistorder i8* bitcast (i8** @global_var_112b8 to i8*), { 1, 0 }
  uselistorder i16** ()* @__ctype_b_loc, { 1, 0, 2 }
  uselistorder i8* null, { 1, 0, 2 }
  uselistorder i8* (i8*, i32)* @strchr, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_10e44, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10d64, { 1, 0 }
  uselistorder label %dec_label_pc_10d50, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10d48, { 1, 0 }
  uselistorder label %dec_label_pc_10d18, { 1, 0 }
}

define i32 @callapi(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10e78:
  %0 = alloca i32
  %sl.0.reg2mem = alloca i32, !insn.addr !173
  %r5.2.reg2mem = alloca i32, !insn.addr !173
  %sb.1.reg2mem = alloca i32, !insn.addr !173
  %r8.0.in.reg2mem = alloca i32*, !insn.addr !173
  %r7.1.reg2mem = alloca i32, !insn.addr !173
  %r6.1.reg2mem = alloca i32, !insn.addr !173
  %r5.1.reg2mem = alloca i32, !insn.addr !173
  %r5.0.reg2mem = alloca i32, !insn.addr !173
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %2 = load i32, i32* %0
  %3 = inttoptr i32 %arg2 to i8*, !insn.addr !174
  %4 = call %hostent* @gethostbyname(i8* %3), !insn.addr !174
  %5 = icmp eq %hostent* %4, null, !insn.addr !175
  br i1 %5, label %dec_label_pc_10fd4, label %dec_label_pc_10e9c, !insn.addr !176

dec_label_pc_10e9c:                               ; preds = %dec_label_pc_10e78
  %6 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !177
  %7 = icmp eq i32 %6, -1, !insn.addr !178
  br i1 %7, label %dec_label_pc_10ff4, label %dec_label_pc_10eb8, !insn.addr !179

dec_label_pc_10eb8:                               ; preds = %dec_label_pc_10e9c
  %8 = call double @__asm_vmov.i32(i32 0), !insn.addr !180
  %9 = call i32 @__asm_rev16(i32 %arg3), !insn.addr !181
  call void @__asm_vst1.8(double %8, i32 %2), !insn.addr !182
  store i32 2, i32* %stack_var_-56, align 4, !insn.addr !183
  call void @__asm_vst1.8(double %8, i32 %1), !insn.addr !184
  %10 = bitcast i32* %stack_var_-56 to %sockaddr*, !insn.addr !185
  %11 = call i32 @connect(i32 %6, %sockaddr* nonnull %10, i32 16), !insn.addr !185
  %12 = icmp slt i32 %11, 0, !insn.addr !186
  br i1 %12, label %dec_label_pc_11020, label %dec_label_pc_10f00, !insn.addr !187

dec_label_pc_10f00:                               ; preds = %dec_label_pc_10eb8
  store i32 1, i32* %stack_var_-72, align 4, !insn.addr !188
  %13 = call i32 @setsockopt(i32 %6, i32 1, i32 13, i32* nonnull %stack_var_-72, i32 8), !insn.addr !189
  %14 = icmp eq i32 %13, 0, !insn.addr !190
  br i1 %14, label %dec_label_pc_10f38, label %dec_label_pc_1109c, !insn.addr !191

dec_label_pc_10f38:                               ; preds = %dec_label_pc_10f00, %dec_label_pc_1109c
  store i32 10, i32* %stack_var_-64, align 4, !insn.addr !192
  %15 = call i32 @setsockopt(i32 %6, i32 1, i32 21, i32* nonnull %stack_var_-64, i32 8), !insn.addr !193
  %16 = icmp eq i32 %15, 0, !insn.addr !194
  br i1 %16, label %dec_label_pc_10f68, label %dec_label_pc_11074, !insn.addr !195

dec_label_pc_10f68:                               ; preds = %dec_label_pc_10f38, %dec_label_pc_11074
  %17 = call i32 @setsockopt(i32 %6, i32 1, i32 20, i32* nonnull %stack_var_-64, i32 8), !insn.addr !196
  %18 = icmp eq i32 %17, 0, !insn.addr !197
  br i1 %18, label %dec_label_pc_10f8c, label %dec_label_pc_1104c, !insn.addr !198

dec_label_pc_10f8c:                               ; preds = %dec_label_pc_10f68, %dec_label_pc_1104c
  %19 = inttoptr i32 %arg1 to i8*, !insn.addr !199
  %20 = call i32 @strlen(i8* %19), !insn.addr !199
  %21 = inttoptr i32 %arg1 to i32*, !insn.addr !200
  %22 = call i32 @send(i32 %6, i32* %21, i32 %20, i32 0), !insn.addr !200
  %23 = icmp slt i32 %22, 1, !insn.addr !201
  br i1 %23, label %dec_label_pc_110c4, label %dec_label_pc_10fb0, !insn.addr !201

dec_label_pc_10fb0:                               ; preds = %dec_label_pc_10f8c
  %24 = call i32 @strlen(i8* %19), !insn.addr !202
  %25 = icmp eq i32 %24, %22, !insn.addr !203
  store i32 %17, i32* %r5.0.reg2mem, !insn.addr !204
  br i1 %25, label %dec_label_pc_110e8, label %dec_label_pc_10fc0, !insn.addr !204

dec_label_pc_10fc0:                               ; preds = %dec_label_pc_111c0, %dec_label_pc_110c4, %dec_label_pc_10fb0
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %26 = call i32 @close(i32 %6), !insn.addr !205
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !205
  br label %dec_label_pc_10fc8, !insn.addr !205

dec_label_pc_10fc8:                               ; preds = %dec_label_pc_11180, %dec_label_pc_11168, %dec_label_pc_10fc0
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !206

dec_label_pc_10fd4:                               ; preds = %dec_label_pc_10e78
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1129c, i32 0, i32 0), i8* %3), !insn.addr !207
  ret i32 1, !insn.addr !208

dec_label_pc_10ff4:                               ; preds = %dec_label_pc_10e9c
  %28 = call i32* @__errno_location(), !insn.addr !209
  %29 = load i32, i32* %28, align 4, !insn.addr !210
  %30 = call i8* @strerror(i32 %29), !insn.addr !211
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_112bc, i32 0, i32 0), i8* %30), !insn.addr !212
  ret i32 1, !insn.addr !213

dec_label_pc_11020:                               ; preds = %dec_label_pc_10eb8
  %32 = call i32* @__errno_location(), !insn.addr !214
  %33 = load i32, i32* %32, align 4, !insn.addr !215
  %34 = call i8* @strerror(i32 %33), !insn.addr !216
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_112e0, i32 0, i32 0), i8* %34), !insn.addr !217
  ret i32 1, !insn.addr !218

dec_label_pc_1104c:                               ; preds = %dec_label_pc_10f68
  %36 = call i32* @__errno_location(), !insn.addr !219
  %37 = load i32, i32* %36, align 4, !insn.addr !220
  %38 = call i8* @strerror(i32 %37), !insn.addr !221
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([48 x i8], [48 x i8]* @global_var_1135c, i32 0, i32 0), i8* %38), !insn.addr !222
  %40 = call i32 @close(i32 %6), !insn.addr !223
  br label %dec_label_pc_10f8c, !insn.addr !224

dec_label_pc_11074:                               ; preds = %dec_label_pc_10f38
  %41 = call i32* @__errno_location(), !insn.addr !225
  %42 = load i32, i32* %41, align 4, !insn.addr !226
  %43 = call i8* @strerror(i32 %42), !insn.addr !227
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([48 x i8], [48 x i8]* @global_var_1132c, i32 0, i32 0), i8* %43), !insn.addr !228
  %45 = call i32 @close(i32 %6), !insn.addr !229
  br label %dec_label_pc_10f68, !insn.addr !230

dec_label_pc_1109c:                               ; preds = %dec_label_pc_10f00
  %46 = call i32* @__errno_location(), !insn.addr !231
  %47 = load i32, i32* %46, align 4, !insn.addr !232
  %48 = call i8* @strerror(i32 %47), !insn.addr !233
  %49 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([46 x i8], [46 x i8]* @global_var_112fc, i32 0, i32 0), i8* %48), !insn.addr !234
  %50 = call i32 @close(i32 %6), !insn.addr !235
  br label %dec_label_pc_10f38, !insn.addr !236

dec_label_pc_110c4:                               ; preds = %dec_label_pc_10f8c
  %51 = call i32* @__errno_location(), !insn.addr !237
  %52 = load i32, i32* %51, align 4, !insn.addr !238
  %53 = call i8* @strerror(i32 %52), !insn.addr !239
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_1138c, i32 0, i32 0), i8* %53), !insn.addr !240
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !241
  br label %dec_label_pc_10fc0, !insn.addr !241

dec_label_pc_110e8:                               ; preds = %dec_label_pc_10fb0
  %55 = call i32* @malloc(i32 65536), !insn.addr !242
  %56 = icmp eq i32* %55, null, !insn.addr !243
  store i32 65535, i32* %r6.1.reg2mem, !insn.addr !244
  store i32 0, i32* %r7.1.reg2mem, !insn.addr !244
  store i32* %55, i32** %r8.0.in.reg2mem, !insn.addr !244
  store i32 3, i32* %sb.1.reg2mem, !insn.addr !244
  br i1 %56, label %dec_label_pc_11180, label %dec_label_pc_11104, !insn.addr !244

dec_label_pc_11104:                               ; preds = %dec_label_pc_110e8, %dec_label_pc_11150
  %r8.0.in.reload = load i32*, i32** %r8.0.in.reg2mem
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r8.0 = ptrtoint i32* %r8.0.in.reload to i32
  %57 = add i32 %r7.1.reload, %r8.0, !insn.addr !245
  %58 = inttoptr i32 %57 to i32*, !insn.addr !246
  %59 = call i32 @recv(i32 %6, i32* %58, i32 65535, i32 0), !insn.addr !246
  %60 = icmp slt i32 %59, 0, !insn.addr !247
  br i1 %60, label %dec_label_pc_111d4, label %dec_label_pc_1113c, !insn.addr !248

dec_label_pc_1113c:                               ; preds = %dec_label_pc_11104
  %61 = icmp eq i32 %59, 0, !insn.addr !247
  br i1 %61, label %dec_label_pc_111f8, label %dec_label_pc_11140, !insn.addr !249

dec_label_pc_11140:                               ; preds = %dec_label_pc_1113c
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %62 = add i32 %59, %r7.1.reload, !insn.addr !250
  %63 = icmp eq i32 %r6.1.reload, %62, !insn.addr !251
  br i1 %63, label %dec_label_pc_11148, label %dec_label_pc_1120c, !insn.addr !252

dec_label_pc_11148:                               ; preds = %dec_label_pc_11140
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %64 = icmp eq i32 %sb.1.reload, 1, !insn.addr !253
  br i1 %64, label %dec_label_pc_11198, label %dec_label_pc_11150, !insn.addr !254

dec_label_pc_11150:                               ; preds = %dec_label_pc_11148
  %65 = add nuw nsw i32 %r6.1.reload, 65536, !insn.addr !255
  %66 = add nuw nsw i32 %r6.1.reload, 65535, !insn.addr !256
  %67 = add nsw i32 %sb.1.reload, -1, !insn.addr !253
  %68 = call i32* @realloc(i32* nonnull %r8.0.in.reload, i32 %65), !insn.addr !257
  %69 = icmp eq i32* %68, null, !insn.addr !258
  store i32 %66, i32* %r6.1.reg2mem, !insn.addr !259
  store i32 %r6.1.reload, i32* %r7.1.reg2mem, !insn.addr !259
  store i32* %68, i32** %r8.0.in.reg2mem, !insn.addr !259
  store i32 %67, i32* %sb.1.reg2mem, !insn.addr !259
  br i1 %69, label %dec_label_pc_11168, label %dec_label_pc_11104, !insn.addr !259

dec_label_pc_11168:                               ; preds = %dec_label_pc_11150
  %70 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_113c4, i32 0, i32 0), i32 %65), !insn.addr !260
  store i32 1, i32* %r5.1.reg2mem, !insn.addr !261
  br label %dec_label_pc_10fc8, !insn.addr !261

dec_label_pc_11180:                               ; preds = %dec_label_pc_110e8
  %71 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_113ac, i32 0, i32 0), i32 65536), !insn.addr !262
  store i32 1, i32* %r5.1.reg2mem, !insn.addr !263
  br label %dec_label_pc_10fc8, !insn.addr !263

dec_label_pc_11198:                               ; preds = %dec_label_pc_11148
  %72 = add i32 %r6.1.reload, %r8.0, !insn.addr !264
  store i32 %17, i32* %r5.2.reg2mem, !insn.addr !264
  store i32 %72, i32* %sl.0.reg2mem, !insn.addr !264
  br label %dec_label_pc_1119c, !insn.addr !264

dec_label_pc_1119c:                               ; preds = %dec_label_pc_1120c, %dec_label_pc_111f8, %dec_label_pc_111d4, %dec_label_pc_11198
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %73 = load i32, i32* @global_var_22080, align 4, !insn.addr !265
  %74 = inttoptr i32 %sl.0.reload to i8*, !insn.addr !266
  store i8 0, i8* %74, align 1, !insn.addr !266
  %75 = icmp eq i32 %73, 0, !insn.addr !267
  br i1 %75, label %dec_label_pc_111cc, label %dec_label_pc_111bc, !insn.addr !268

dec_label_pc_111bc:                               ; preds = %dec_label_pc_1119c
  %76 = bitcast i32* %r8.0.in.reload to i8*, !insn.addr !269
  %77 = call i32 @puts(i8* %76), !insn.addr !269
  br label %dec_label_pc_111c0, !insn.addr !269

dec_label_pc_111c0:                               ; preds = %dec_label_pc_111cc, %dec_label_pc_111bc
  call void @free(i32* nonnull %r8.0.in.reload), !insn.addr !270
  store i32 %r5.2.reload, i32* %r5.0.reg2mem, !insn.addr !271
  br label %dec_label_pc_10fc0, !insn.addr !271

dec_label_pc_111cc:                               ; preds = %dec_label_pc_1119c
  %78 = call i32 @display(i32 %r8.0), !insn.addr !272
  br label %dec_label_pc_111c0, !insn.addr !273

dec_label_pc_111d4:                               ; preds = %dec_label_pc_11104
  %79 = call i32* @__errno_location(), !insn.addr !274
  %80 = load i32, i32* %79, align 4, !insn.addr !275
  %81 = call i8* @strerror(i32 %80), !insn.addr !276
  %82 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_113e0, i32 0, i32 0), i8* %81), !insn.addr !277
  store i32 1, i32* %r5.2.reg2mem, !insn.addr !278
  store i32 %57, i32* %sl.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_1119c, !insn.addr !278

dec_label_pc_111f8:                               ; preds = %dec_label_pc_1113c
  %83 = call i32 @puts(i8* getelementptr inbounds ([41 x i8], [41 x i8]* @global_var_113f4, i32 0, i32 0)), !insn.addr !279
  store i32 1, i32* %r5.2.reg2mem, !insn.addr !280
  store i32 %57, i32* %sl.0.reg2mem, !insn.addr !280
  br label %dec_label_pc_1119c, !insn.addr !280

dec_label_pc_1120c:                               ; preds = %dec_label_pc_11140
  %84 = add i32 %62, %r8.0, !insn.addr !281
  store i32 %17, i32* %r5.2.reg2mem, !insn.addr !282
  store i32 %84, i32* %sl.0.reg2mem, !insn.addr !282
  br label %dec_label_pc_1119c, !insn.addr !282

; uselistorder directives
  uselistorder i32 %r6.1.reload, { 4, 0, 2, 1, 3 }
  uselistorder i32 %r8.0, { 2, 0, 1, 3 }
  uselistorder i32* %r8.0.in.reload, { 3, 2, 1, 0 }
  uselistorder double %8, { 1, 0 }
  uselistorder i32 %6, { 3, 0, 1, 2, 4, 5, 6, 7, 8, 9, 10 }
  uselistorder i32* %r5.0.reg2mem, { 2, 3, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %r6.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.1.reg2mem, { 2, 0, 1 }
  uselistorder i32** %r8.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.2.reg2mem, { 1, 3, 4, 0, 2 }
  uselistorder i32* %sl.0.reg2mem, { 1, 3, 4, 0, 2 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2, 3 }
  uselistorder i8 0, { 1, 4, 7, 3, 6, 2, 5, 8, 0, 9, 10, 11, 12, 13, 14 }
  uselistorder i32* @global_var_22080, { 1, 0 }
  uselistorder i32 65535, { 2, 1, 0 }
  uselistorder i32 65536, { 0, 2, 1 }
  uselistorder i8* (i32)* @strerror, { 1, 0, 6, 5, 4, 3, 2, 7 }
  uselistorder i32* ()* @__errno_location, { 6, 0, 1, 2, 3, 4, 5, 7 }
  uselistorder i32 (i8*, ...)* @printf, { 3, 10, 0, 4, 13, 2, 1, 9, 8, 7, 6, 5, 12, 11, 14 }
  uselistorder i32 (i32)* @close, { 0, 1, 3, 2, 4 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_11104, { 1, 0 }
  uselistorder label %dec_label_pc_10f8c, { 1, 0 }
  uselistorder label %dec_label_pc_10f68, { 1, 0 }
  uselistorder label %dec_label_pc_10f38, { 1, 0 }
}

define i32 @__libc_csu_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11214:
  %0 = call i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !283
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139018, i32 ptrtoint (i32* @global_var_21f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !284

; uselistorder directives
  uselistorder i32 0, { 13, 32, 33, 30, 31, 46, 28, 29, 34, 35, 58, 59, 47, 0, 26, 27, 20, 21, 22, 23, 24, 25, 18, 19, 16, 17, 14, 15, 48, 60, 61, 62, 63, 64, 49, 38, 39, 4, 5, 55, 36, 37, 10, 11, 12, 54, 1, 56, 2, 57, 7, 8, 51, 9, 52, 53, 3, 6, 67, 40, 41, 65, 66, 42, 43, 44, 45, 50 }
  uselistorder i32 2, { 4, 5, 7, 1, 2, 3, 8, 0, 9, 10, 11, 12, 6 }
}

define i32 @__libc_csu_fini() local_unnamed_addr {
dec_label_pc_11250:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !285

; uselistorder directives
  uselistorder i32 1, { 5, 9, 10, 17, 16, 67, 19, 47, 46, 45, 51, 53, 54, 55, 52, 56, 60, 59, 58, 20, 18, 15, 14, 13, 12, 11, 8, 4, 62, 63, 64, 65, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 66, 32, 31, 3, 33, 2, 49, 44, 35, 34, 7, 6, 1, 0, 61, 48, 50, 42, 41, 68, 69, 40, 43, 39, 38, 37, 36, 57 }
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11254:
  ret i32 %arg1, !insn.addr !286
}

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @strtol(i8*, i8**, i32) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32* @__rawmemchr(i32*, i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i16** @__ctype_b_loc() local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare %hostent* @gethostbyname(i8*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @__asm_sxth(i32) local_unnamed_addr

declare double @__asm_vmov.i32(i32) local_unnamed_addr

declare i32 @__asm_rev16(i32) local_unnamed_addr

declare void @__asm_vst1.8(double, i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vmvn.i32(i32) local_unnamed_addr

!0 = !{i64 67820}
!1 = !{i64 67824}
!2 = !{i64 67856}
!3 = !{i64 67868}
!4 = !{i64 67880}
!5 = !{i64 67892}
!6 = !{i64 67904}
!7 = !{i64 67916}
!8 = !{i64 67928}
!9 = !{i64 67940}
!10 = !{i64 67952}
!11 = !{i64 67964}
!12 = !{i64 67976}
!13 = !{i64 67988}
!14 = !{i64 68000}
!15 = !{i64 68012}
!16 = !{i64 68024}
!17 = !{i64 68036}
!18 = !{i64 68048}
!19 = !{i64 68060}
!20 = !{i64 68072}
!21 = !{i64 68084}
!22 = !{i64 68096}
!23 = !{i64 68108}
!24 = !{i64 68120}
!25 = !{i64 68132}
!26 = !{i64 68136}
!27 = !{i64 68144}
!28 = !{i64 68148}
!29 = !{i64 68160}
!30 = !{i64 68164}
!31 = !{i64 68168}
!32 = !{i64 68184}
!33 = !{i64 68188}
!34 = !{i64 68192}
!35 = !{i64 68200}
!36 = !{i64 68204}
!37 = !{i64 68208}
!38 = !{i64 68224}
!39 = !{i64 68228}
!40 = !{i64 68240}
!41 = !{i64 68248}
!42 = !{i64 68260}
!43 = !{i64 68264}
!44 = !{i64 68268}
!45 = !{i64 68272}
!46 = !{i64 68284}
!47 = !{i64 68288}
!48 = !{i64 68292}
!49 = !{i64 68296}
!50 = !{i64 68300}
!51 = !{i64 68304}
!52 = !{i64 68316}
!53 = !{i64 68328}
!54 = !{i64 68332}
!55 = !{i64 68336}
!56 = !{i64 68352}
!57 = !{i64 68356}
!58 = !{i64 68360}
!59 = !{i64 68364}
!60 = !{i64 68368}
!61 = !{i64 68372}
!62 = !{i64 68376}
!63 = !{i64 68380}
!64 = !{i64 68384}
!65 = !{i64 68404}
!66 = !{i64 68408}
!67 = !{i64 68444}
!68 = !{i64 68456}
!69 = !{i64 68460}
!70 = !{i64 68464}
!71 = !{i64 68484}
!72 = !{i64 68492}
!73 = !{i64 68500}
!74 = !{i64 68512}
!75 = !{i64 68516}
!76 = !{i64 68520}
!77 = !{i64 68568}
!78 = !{i64 68572}
!79 = !{i64 68578}
!80 = !{i64 68600}
!81 = !{i64 68604}
!82 = !{i64 68608}
!83 = !{i64 68612}
!84 = !{i64 68624}
!85 = !{i64 68656}
!86 = !{i64 68676}
!87 = !{i64 68680}
!88 = !{i64 68688}
!89 = !{i64 68700}
!90 = !{i64 68704}
!91 = !{i64 68708}
!92 = !{i64 68712}
!93 = !{i64 68716}
!94 = !{i64 68718}
!95 = !{i64 68724}
!96 = !{i64 68726}
!97 = !{i64 68728}
!98 = !{i64 68732}
!99 = !{i64 68740}
!100 = !{i64 68748}
!101 = !{i64 68752}
!102 = !{i64 68760}
!103 = !{i64 68764}
!104 = !{i64 68768}
!105 = !{i64 68772}
!106 = !{i64 68776}
!107 = !{i64 68780}
!108 = !{i64 68792}
!109 = !{i64 68828}
!110 = !{i64 68832}
!111 = !{i64 68804}
!112 = !{i64 68812}
!113 = !{i64 68816}
!114 = !{i64 68820}
!115 = !{i64 68824}
!116 = !{i64 68840}
!117 = !{i64 68844}
!118 = !{i64 68848}
!119 = !{i64 68856}
!120 = !{i64 68896}
!121 = !{i64 68900}
!122 = !{i64 68904}
!123 = !{i64 68912}
!124 = !{i64 68916}
!125 = !{i64 68920}
!126 = !{i64 68924}
!127 = !{i64 68932}
!128 = !{i64 68936}
!129 = !{i64 68940}
!130 = !{i64 68948}
!131 = !{i64 68952}
!132 = !{i64 68956}
!133 = !{i64 68960}
!134 = !{i64 68968}
!135 = !{i64 68976}
!136 = !{i64 68980}
!137 = !{i64 68984}
!138 = !{i64 68988}
!139 = !{i64 68996}
!140 = !{i64 69008}
!141 = !{i64 69012}
!142 = !{i64 69016}
!143 = !{i64 69028}
!144 = !{i64 69032}
!145 = !{i64 69036}
!146 = !{i64 69044}
!147 = !{i64 69048}
!148 = !{i64 69052}
!149 = !{i64 69060}
!150 = !{i64 69064}
!151 = !{i64 69072}
!152 = !{i64 69076}
!153 = !{i64 69088}
!154 = !{i64 69108}
!155 = !{i64 69112}
!156 = !{i64 69116}
!157 = !{i64 69120}
!158 = !{i64 69124}
!159 = !{i64 69136}
!160 = !{i64 69140}
!161 = !{i64 69144}
!162 = !{i64 69148}
!163 = !{i64 69152}
!164 = !{i64 69156}
!165 = !{i64 69168}
!166 = !{i64 69176}
!167 = !{i64 69184}
!168 = !{i64 69204}
!169 = !{i64 69208}
!170 = !{i64 69216}
!171 = !{i64 69232}
!172 = !{i64 69236}
!173 = !{i64 69240}
!174 = !{i64 69264}
!175 = !{i64 69268}
!176 = !{i64 69272}
!177 = !{i64 69288}
!178 = !{i64 69292}
!179 = !{i64 69300}
!180 = !{i64 69304}
!181 = !{i64 69324}
!182 = !{i64 69328}
!183 = !{i64 69336}
!184 = !{i64 69340}
!185 = !{i64 69364}
!186 = !{i64 69368}
!187 = !{i64 69372}
!188 = !{i64 69408}
!189 = !{i64 69420}
!190 = !{i64 69424}
!191 = !{i64 69428}
!192 = !{i64 69464}
!193 = !{i64 69468}
!194 = !{i64 69472}
!195 = !{i64 69476}
!196 = !{i64 69504}
!197 = !{i64 69508}
!198 = !{i64 69512}
!199 = !{i64 69520}
!200 = !{i64 69540}
!201 = !{i64 69548}
!202 = !{i64 69556}
!203 = !{i64 69560}
!204 = !{i64 69564}
!205 = !{i64 69572}
!206 = !{i64 69584}
!207 = !{i64 69604}
!208 = !{i64 69616}
!209 = !{i64 69620}
!210 = !{i64 69628}
!211 = !{i64 69632}
!212 = !{i64 69648}
!213 = !{i64 69660}
!214 = !{i64 69664}
!215 = !{i64 69672}
!216 = !{i64 69676}
!217 = !{i64 69692}
!218 = !{i64 69704}
!219 = !{i64 69708}
!220 = !{i64 69712}
!221 = !{i64 69716}
!222 = !{i64 69732}
!223 = !{i64 69740}
!224 = !{i64 69744}
!225 = !{i64 69748}
!226 = !{i64 69752}
!227 = !{i64 69756}
!228 = !{i64 69772}
!229 = !{i64 69780}
!230 = !{i64 69784}
!231 = !{i64 69788}
!232 = !{i64 69792}
!233 = !{i64 69796}
!234 = !{i64 69812}
!235 = !{i64 69820}
!236 = !{i64 69824}
!237 = !{i64 69828}
!238 = !{i64 69836}
!239 = !{i64 69840}
!240 = !{i64 69856}
!241 = !{i64 69860}
!242 = !{i64 69868}
!243 = !{i64 69872}
!244 = !{i64 69888}
!245 = !{i64 69892}
!246 = !{i64 69916}
!247 = !{i64 69932}
!248 = !{i64 69944}
!249 = !{i64 69948}
!250 = !{i64 69940}
!251 = !{i64 69952}
!252 = !{i64 69956}
!253 = !{i64 69960}
!254 = !{i64 69964}
!255 = !{i64 69912}
!256 = !{i64 69928}
!257 = !{i64 69972}
!258 = !{i64 69984}
!259 = !{i64 69988}
!260 = !{i64 70008}
!261 = !{i64 70012}
!262 = !{i64 70032}
!263 = !{i64 70036}
!264 = !{i64 70040}
!265 = !{i64 70060}
!266 = !{i64 70064}
!267 = !{i64 70068}
!268 = !{i64 70072}
!269 = !{i64 70076}
!270 = !{i64 70084}
!271 = !{i64 70088}
!272 = !{i64 70092}
!273 = !{i64 70096}
!274 = !{i64 70100}
!275 = !{i64 70108}
!276 = !{i64 70112}
!277 = !{i64 70128}
!278 = !{i64 70132}
!279 = !{i64 70144}
!280 = !{i64 70152}
!281 = !{i64 70156}
!282 = !{i64 70160}
!283 = !{i64 70180}
!284 = !{i64 70212}
!285 = !{i64 70224}
!286 = !{i64 70232}
