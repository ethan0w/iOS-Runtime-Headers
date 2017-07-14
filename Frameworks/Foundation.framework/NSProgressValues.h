/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProgressValues : NSObject <NSSecureCoding> {
    _NSProgressFraction * _childFraction;
    BOOL  _isCancellable;
    BOOL  _isCancelled;
    BOOL  _isPausable;
    BOOL  _isPaused;
    BOOL  _isPrioritizable;
    NSString * _kind;
    NSString * _localizedAdditionalDescription;
    NSString * _localizedDescription;
    long long  _portionOfParent;
    _NSProgressFraction * _selfFraction;
    NSMutableDictionary * _userInfo;
    BOOL  _usingChildUserInfo;
}

+ (id)_derivedKeys;
+ (id)_importantKeys;
+ (id)decodableClasses;
+ (BOOL)supportsSecureCoding;

- (id)_indentedDescription:(unsigned int)arg1;
- (long long)completedUnitCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fractionCompleted;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isIndeterminate;
- (id)overallFraction;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setFractionCompleted:(double)arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (long long)totalUnitCount;

@end
