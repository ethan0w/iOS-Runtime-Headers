/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUUID : NSObject <NSCopying, NSSecureCoding> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)UUID;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __CFString { }*)_cfUUIDString;
- (id)initWithUUIDBytes:(unsigned char[16])arg1;
- (id)UUIDString;
- (id)initWithUUIDString:(id)arg1;
- (void)getUUIDBytes:(unsigned char[16])arg1;
- (unsigned long)_cfTypeID;

@end
