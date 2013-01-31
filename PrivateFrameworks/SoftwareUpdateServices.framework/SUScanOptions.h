/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class NSSet, NSString, NSMutableSet;

@interface SUScanOptions : NSObject <NSCoding> {
    NSString *_identifier;
    BOOL _forced;
    NSMutableSet *_types;
}

@property(retain) NSString * identifier;
@property(getter=isForced) BOOL forced;
@property(retain) NSSet * types;


- (id)identifier;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setForced:(BOOL)arg1;
- (BOOL)isForced;
- (void)clearTypes;
- (BOOL)findsAnyUpdate;
- (void)removeType:(int)arg1;
- (BOOL)containsType:(int)arg1;
- (void)setTypes:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addType:(int)arg1;
- (id)types;

@end
