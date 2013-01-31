/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSCoding> {
    id _internal;
}

@property(readonly) struct { double x1; double x2; } center;
@property(readonly) double radius;
@property(readonly) NSString * identifier;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; double x2; BOOL x3[512]; } clientRegion;


- (id)identifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)radius;
- (BOOL)containsCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })center;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initCircularRegionWithCenter:(struct { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; double x2; BOOL x3[512]; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; double x2; BOOL x3[512]; })clientRegion;

@end
