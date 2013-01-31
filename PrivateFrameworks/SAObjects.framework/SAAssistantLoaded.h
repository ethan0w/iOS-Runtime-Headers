/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand  {
}

@property(copy) NSString * dataAnchor;
@property(copy) NSNumber * requestSync;
@property(copy) NSArray * syncAnchors;
@property(copy) NSString * version;

+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantLoaded;

- (void)setSyncAnchors:(id)arg1;
- (id)syncAnchors;
- (void)setRequestSync:(id)arg1;
- (id)requestSync;
- (void)setDataAnchor:(id)arg1;
- (id)dataAnchor;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setVersion:(id)arg1;
- (id)version;
- (id)groupIdentifier;

@end
