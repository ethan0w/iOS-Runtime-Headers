/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <RTFCPZArchiveInputStream>;

@interface RTFCPZEntryInflateInputStream : NSObject <RTFCPZEntryInputStream> {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } mStream;
    long long mOffset;
    long long mEnd;
    unsigned long mCalculatedCrc;
    unsigned long mCheckCrc;
    <RTFCPZArchiveInputStream> *mInput;
    char *mOutBuffer;
    unsigned long mOutBufferSize;
}


- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long)arg4 input:(id)arg5;
- (id).cxx_construct;
- (void)dealloc;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned int*)arg2;

@end
