/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding> {
    NTKEditOption * _nilSlotOption;
    NSMutableDictionary * _optionsBySlot;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_alphabeticalSlots;
- (id)dailySnapshotKey;
- (id)description;
- (id)editOptionForSlot:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateSlotsWithBlock:(id /* block */)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 editOptionClass:(Class)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setEditOption:(id)arg1 forSlot:(id)arg2;

@end
