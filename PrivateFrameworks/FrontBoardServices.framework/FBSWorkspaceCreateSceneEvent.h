/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent {
    FBSSceneClientSettingsDiff * _clientSettings;
    FBSDisplay * _display;
    NSString * _specificationClassName;
}

@property (nonatomic, retain) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (nonatomic, retain) FBSDisplay *display;
@property (nonatomic, retain) FBSSceneSpecification *specification;

- (id)clientSettingsDiff;
- (void)dealloc;
- (id)display;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setClientSettingsDiff:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setSpecification:(id)arg1;
- (id)specification;

@end
