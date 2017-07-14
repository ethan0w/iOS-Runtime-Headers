/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic) BOOL configurable;
@property (nonatomic) BOOL enumerable;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *get;
@property (nonatomic) BOOL isOwn;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL nativeGetter;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *set;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *symbol;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *value;
@property (nonatomic) BOOL wasThrown;
@property (nonatomic) BOOL writable;

- (BOOL)configurable;
- (BOOL)enumerable;
- (id)get;
- (id)initWithName:(id)arg1 configurable:(BOOL)arg2 enumerable:(BOOL)arg3;
- (BOOL)isOwn;
- (id)name;
- (BOOL)nativeGetter;
- (id)set;
- (void)setConfigurable:(BOOL)arg1;
- (void)setEnumerable:(BOOL)arg1;
- (void)setGet:(id)arg1;
- (void)setIsOwn:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setNativeGetter:(BOOL)arg1;
- (void)setSet:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWasThrown:(BOOL)arg1;
- (void)setWritable:(BOOL)arg1;
- (id)symbol;
- (id)value;
- (BOOL)wasThrown;
- (BOOL)writable;

@end
