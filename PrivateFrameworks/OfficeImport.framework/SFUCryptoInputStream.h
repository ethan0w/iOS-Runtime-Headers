/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUInputStream>, SFUCryptor;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
    <SFUInputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    long long mOffset;
}


- (void)dealloc;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (void)close;
- (long long)offset;

@end
