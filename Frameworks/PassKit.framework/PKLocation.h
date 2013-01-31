/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSNumber, NSString;

@interface PKLocation : NSObject <NSSecureCoding> {
    double _latitude;
    double _longitude;
    NSNumber *_boxedAltitude;
    NSString *_name;
    NSString *_relevantText;
}

@property double latitude;
@property double longitude;
@property double altitude;
@property(retain) NSString * name;
@property(retain) NSString * relevantText;
@property(retain) NSNumber * boxedAltitude;

+ (BOOL)supportsSecureCoding;

- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (double)altitude;
- (double)longitude;
- (double)latitude;
- (void)setAltitude:(double)arg1;
- (BOOL)hasAltitude;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)relevantText;
- (void)setRelevantText:(id)arg1;
- (void)setBoxedAltitude:(id)arg1;
- (id)boxedAltitude;
- (void)setLongitude:(double)arg1;
- (void)setLatitude:(double)arg1;

@end
