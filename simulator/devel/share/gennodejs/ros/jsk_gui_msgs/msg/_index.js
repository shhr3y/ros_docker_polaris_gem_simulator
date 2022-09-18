
"use strict";

let Action = require('./Action.js');
let AndroidSensor = require('./AndroidSensor.js');
let DeviceSensor = require('./DeviceSensor.js');
let Gravity = require('./Gravity.js');
let MagneticField = require('./MagneticField.js');
let MultiTouch = require('./MultiTouch.js');
let SlackMessage = require('./SlackMessage.js');
let Tablet = require('./Tablet.js');
let Touch = require('./Touch.js');
let TouchEvent = require('./TouchEvent.js');
let VoiceMessage = require('./VoiceMessage.js');

module.exports = {
  Action: Action,
  AndroidSensor: AndroidSensor,
  DeviceSensor: DeviceSensor,
  Gravity: Gravity,
  MagneticField: MagneticField,
  MultiTouch: MultiTouch,
  SlackMessage: SlackMessage,
  Tablet: Tablet,
  Touch: Touch,
  TouchEvent: TouchEvent,
  VoiceMessage: VoiceMessage,
};
