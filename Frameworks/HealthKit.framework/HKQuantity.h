/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantity : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    HKUnit * _unit;
    double  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (getter=_unit, nonatomic, readonly) HKUnit *unit;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_foundationMeasurement;
- (id)_initWithUnit:(id)arg1 doubleValue:(double)arg2;
- (BOOL)_isZero;
- (id)_quantityByAddingQuantity:(id)arg1;
- (id)_unit;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValueForUnit:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCompatibleWithUnit:(id)arg1;
- (BOOL)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (double)fiui_doubleValueByDividingByQuantity:(id)arg1;
- (BOOL)fiui_isNonzero;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
