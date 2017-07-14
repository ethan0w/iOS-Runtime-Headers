/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogChunkBuffer : NSObject {
    BOOL  _allocated;
    const char * _data;
    unsigned long  _sz;
}

@property (nonatomic, readonly) const char *data;
@property (nonatomic, readonly) unsigned long size;

- (const char *)data;
- (void)dealloc;
- (id)initWithChunk:(struct tracev3_chunk_s { struct tracev3_chunk_preamble_s { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; } x1; union { struct tracev3_chunk_header_s { struct mach_timebase_info { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; long long x_1_2_3; int x_1_2_4; int x_1_2_5; int x_1_2_6; unsigned int x_1_2_7; struct tracev3_subchunk_preamble_s { unsigned int x_8_3_1; unsigned int x_8_3_2; } x_1_2_8; struct tracev3_subchunk_continuous_s { unsigned long long x_9_3_1; } x_1_2_9; struct tracev3_subchunk_preamble_s { unsigned int x_10_3_1; unsigned int x_10_3_2; } x_1_2_10; struct tracev3_subchunk_systeminfo_s { int x_11_3_1; int x_11_3_2; BOOL x_11_3_3[16]; BOOL x_11_3_4[32]; } x_1_2_11; struct tracev3_subchunk_preamble_s { unsigned int x_12_3_1; unsigned int x_12_3_2; } x_1_2_12; struct tracev3_subchunk_generation_s { unsigned char x_13_3_1[16]; int x_13_3_2; int x_13_3_3; } x_1_2_13; struct tracev3_subchunk_preamble_s { unsigned int x_14_3_1; unsigned int x_14_3_2; } x_1_2_14; struct tracev3_subchunk_timezone_s { BOOL x_15_3_1[48]; } x_1_2_15; } x_2_1_1; struct tracev3_chunk_catalog_s { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; unsigned short x_2_2_4; unsigned char x_2_2_5[0]; } x_2_1_2; } x2; }*)arg1 subchunk:(struct catalog_subchunk_s { struct { struct catalog_subchunk_s {} *x_1_1_1; struct catalog_subchunk_s {} **x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; struct hashtable {} *x6; struct hashtable {} *x7; }*)arg2;
- (unsigned long)size;

@end
