#ifndef SuperPlayerControlViewDelegate_h
#define SuperPlayerControlViewDelegate_h


@class SuperPlayerUrl;

@protocol SuperPlayerControlViewDelegate <NSObject>

/** 返回按钮事件 */
- (void)controlViewBack:(UIView *)controlView;
/** 播放 */
- (void)controlViewPlay:(UIView *)controlView;
/** 暂停 */
- (void)controlViewPause:(UIView *)controlView;
/** 播放器全屏 */
- (void)controlViewChangeScreen:(UIView *)controlView withFullScreen:(BOOL)isFullScreen;
/** 锁定屏幕方向 */
- (void)controlViewLockScreen:(UIView *)controlView withLock:(BOOL)islock;
/** 截屏事件 */
- (void)controlViewSnapshot:(UIView *)controlView;
/** 弹幕按钮事件 */
- (void)controlViewDanmaku:(UIView *)controlView withShow:(BOOL)show;
/** 切换分辨率按钮事件 */
- (void)controlViewSwitch:(UIView *)controlView withModel:(SuperPlayerUrl *)model;
/** 修改速度 */
- (void)controlViewSetSpeed:(UIView *)controlView withSpeed:(CGFloat)value;
/** 修改镜像 */
- (void)controlViewSetMirror:(UIView *)controlView withMirror:(BOOL)on;
/** 重新播放 */
- (void)controlViewReload:(UIView *)controlView;
/** seek事件，pos 0~1 */
- (void)controlViewSeek:(UIView *)controlView where:(CGFloat)pos;
/** 滑动预览，pos 0~1 */
- (void)controlViewPreview:(UIView *)controlView where:(CGFloat)pos;

@end


#endif /* SuperPlayerControlViewDelegate_h */
