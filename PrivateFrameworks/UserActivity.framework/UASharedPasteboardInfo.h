/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UASharedPasteboardInfo : NSObject <NSCopying, NSSecureCoding> {
    NSFileHandle * _dataFile;
    int  _dataSize;
    NSArray * _items;
}

@property (retain) NSFileHandle *dataFile;
@property int dataSize;
@property (copy) NSArray *items;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFile;
- (int)dataSize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (void)setDataFile:(id)arg1;
- (void)setDataSize:(int)arg1;
- (void)setItems:(id)arg1;

@end
