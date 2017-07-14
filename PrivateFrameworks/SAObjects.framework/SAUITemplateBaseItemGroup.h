/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>

@property (nonatomic, copy) NSArray *communicationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) BOOL hasPriorityLayout;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAUITemplateEdgeInsets *padding;
@property (nonatomic, copy) NSArray *presentationOptions;
@property (nonatomic) BOOL shouldBeOffscreenInPartial;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *templateItems;

+ (id)baseItemGroup;
+ (id)baseItemGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTemplateItems:(id)arg1;
- (id)templateItems;

@end
