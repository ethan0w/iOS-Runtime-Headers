/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKNumericSuggestionLastInput : NSObject {
    NSMutableDictionary * _passLastInputDictionary;
    NSString * _serialNumber;
}

@property (nonatomic, copy) NSDecimalNumber *value;
@property (nonatomic) BOOL wentToMax;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPassSerialNumber:(id)arg1;
- (void)save;
- (void)setValue:(id)arg1;
- (void)setWentToMax:(BOOL)arg1;
- (id)value;
- (BOOL)wentToMax;

@end
