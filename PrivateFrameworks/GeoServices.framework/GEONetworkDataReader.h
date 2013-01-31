/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableData;

@interface GEONetworkDataReader : NSObject  {
    NSMutableData *_data;
    unsigned int _dataLength;
    const void *_bytes;
    unsigned int _bookmarkOffset;
    unsigned int _offset;
}


- (void)dealloc;
- (BOOL)hasUnreadData;
- (void)seekToMarkedOffset;
- (void)markOffset;
- (id)readData:(unsigned int)arg1;
- (BOOL)readUnsignedInt:(unsigned int*)arg1;
- (id)readString;
- (void)appendNetworkData:(id)arg1;
- (id)allData;
- (BOOL)readUnsignedShort:(unsigned short*)arg1;
- (id)initWithData:(id)arg1;

@end
